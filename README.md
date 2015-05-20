# vOS
ActiveX Windows Manager/GUI for Van Automation written in GTK2 (3?) and C
-----------------------------------------------------------------------------------------------------------------------
CONFIGURING LINUX TO BOOT INTO vOS:
	1. Add the following to '/etc/rc.local': 
		'#/etc/rc.local
		su -s /bin/bash -c startx your_user&'

		-this will impersonate 'your_user' (pi)
		-start a bash shell
		-launch startx from within the shell

	2. Run the following from terminal and select 'Anybody':
		'dpkg-reconfigure x11-common'

		-this allows non-interactive processes (such as scripts) to launch an X server (this is not allowed by default)

	3. Create a '~/.xinitrc' file (if it doesn't exist) and add the following: 
		'#~your_user/.xinitrc
		/usr/bin/vOS/vOS_Entry'

		-this will launch the entry GUI app for vOS
		-this file must be placed in your users directory
		-it launches the application when the x server starts
-----------------------------------------------------------------------------------------------------------------------

Place vOS Directory in '/usr/bin'

CURRENT PI INTERNAL IP (for SSH): pi@192.168.1.181
