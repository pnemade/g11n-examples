#!/usr/bin/python

import conference

badge = raw_input('Are you a speaker or organizer?')

if badge == "speaker" :
   conference.Speaker()
elif badge == "organizer" :
   conference.Organizer()
else:
   print("Hi attendee, Welcome to FUDCon Phnom Penh".format(badge))
