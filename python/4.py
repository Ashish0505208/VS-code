def vacuum_agent():
    states = ["A_CLEAN", "A_DIRTY", "B_CLEAN", "B_DIRTY"]
    actions = {"CLEAN": "SUCK!", "MOVE": {"A": "Move to Right", "B": "Move to Left"}}
    percept_table = {}
    steps = []

    def transition(state):
        room, status = state.split("_")
        if status == "DIRTY":
            return f"{room}_CLEAN", actions["CLEAN"]
        elif room == "A":
            return "B_DIRTY", actions["MOVE"]["A"]
        elif room == "B":
            return "A_DIRTY", actions["MOVE"]["B"]

    room = input("Enter the starting room (A/B): ").upper()
    if room not in ["A", "B"]:
        print("Invalid room. Starting with room A.")
        room = "A"
    status = input(f"Enter the status of room {room} (CLEAN/DIRTY): ").upper()
    if status not in ["CLEAN", "DIRTY"]:
        print("Invalid status. Defaulting to DIRTY.")
        status = "DIRTY"

    current_state = f"{room}_{status}"
    i = 0
    while True:
        room, status = current_state.split("_")
        print(f"Current Room: {room}, Status: {status}")
        next_state, action = transition(current_state)

        # Ask for the status of room B if moving to it
        if room == "A" and action == "Move to Right":
            room_b_status = input("Enter the status of room B (CLEAN/DIRTY): ").upper()
            if room_b_status not in ["CLEAN", "DIRTY"]:
                print("Invalid status. Defaulting to DIRTY.")
                room_b_status = "DIRTY"
            next_state = f"B_{room_b_status}"

        percept_table[f"Action {i}"] = (room, action)
        steps.append(action)
        print(percept_table)
        print(f"Action Taken: {action}, Transitioning to: {next_state}\n")
        current_state = next_state
        i += 1
        user_input = input(f"Current Room: {room}. Continue to next action? (yes/no): ").lower()
        if user_input == "no":
            print("Terminating the program. Goodbye!")
            break

    print(f"Path Cost: {len(steps)}")

vacuum_agent()