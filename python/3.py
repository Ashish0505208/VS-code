def vacuum_agent():
    # Initial environment state
    rooms = {"A": "DIRTY", "B": "DIRTY"}
    actions = {"CLEAN": "SUCK!", "MOVE": {"A": "Move to Right", "B": "Move to Left"}}
    steps = []

    # Get user input for initial setup
    room = input("Enter the starting room (A/B): ").upper()
    if room not in rooms:
        print("Invalid room. Starting with room A.")
        room = "A"
    status = input(f"Enter the status of room {room} (CLEAN/DIRTY): ").upper()
    if status not in ["CLEAN", "DIRTY"]:
        print("Invalid status. Defaulting to DIRTY.")
        status = "DIRTY"
    rooms[room] = status

    print("\nInitial State:", rooms)
    while True:
        # Determine current room and action
        if rooms[room] == "DIRTY":
            print(f"Cleaning {room}.")
            rooms[room] = "CLEAN"
            steps.append(actions["CLEAN"])
        else:
            print(f"{room} is already clean.")

        # Check if all rooms are clean
        if all(status == "CLEAN" for status in rooms.values()):
            print("All rooms are clean. Task completed!")
            break

        # Move to the next room
        if room == "A":
            room = "B"
            steps.append(actions["MOVE"]["A"])
        else:
            room = "A"
            steps.append(actions["MOVE"]["B"])

        print("Current State:", rooms)
        print(f"Steps Taken: {steps}\n")

    print(f"Path Cost: {len(steps)}")
    print("Steps:", steps)


vacuum_agent()
