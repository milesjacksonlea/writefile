import netmiko
connectionInfo = {
    'device_type':'cisco_ios',
    'host':'192.169.1.1',
    'username':'cisco',
    'password':'cisco',
    'secret':'class'
    }
session = netmiko.ConnectHandler(**connectionInfo)
session.enable()
config = session.send_command("sh running-config")
file = open("config-output.txt", "w")
file.write(config)
file.close()
