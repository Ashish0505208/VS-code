def agent(percepts):
  room,status = percepts

  if room == "A":
    if status == "CLEAN":
      return "Move to Right"
    elif status == "DIRTY":
      return "SUCK!"
  elif room == "B":
    if status == "CLEAN":
      return "Move to Left"
    elif status == "DIRTY":
      return "SUCK!"

def main():

  percepts = ()
  percept_table = {}
  i=0
  while True:
    room = input("Enter either Room 'A' or Room 'B' or 'exit' ")
    if room.lower() == 'exit':
      print("Hope you had a really good experience! BYE ;)")
      break
    clean_status = input("Enter the Rooms cleanliness status: (Clean/Dirty)")

    if room.lower() == 'a':
      percepts = (room.upper(),clean_status.upper())
      agent_data = agent(percepts)
      action = (room.upper(),agent_data)
      percept_table.update({"Action "+str(i): action})
      print(percept_table)

    elif room.lower() == 'b':
      percepts = (room.upper(),clean_status.upper())
      agent_data = agent(percepts)
      action = (room.upper(),agent_data)
      percept_table.update({"Action "+str(i): action})
      print(percept_table)
    else:
      print("Invalid Input! type again (hint: don't add any character at the end!)")
    i = i + 1

main()