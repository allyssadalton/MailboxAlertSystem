import smtplib
from email.mime.text import MIMEText

# SMTP Server Details
SMTP_SERVER = "smtp.gmail.com"
SMTP_PORT = 587  # Use 465 for SSL
EMAIL_ADDRESS = "allyssadalton4@gmail.com"
EMAIL_PASSWORD = "bjqc bawv tozm qqsj"  # Use App Password

# Create the email
msg = MIMEText("This is a test email from Python")
msg["Subject"] = "Test Email"
msg["From"] = EMAIL_ADDRESS
msg["To"] = "daltonam@uindy.edu"

# Connect to Gmail SMTP Server
with smtplib.SMTP(SMTP_SERVER, SMTP_PORT) as server:
    server.starttls()  # Secure the connection
    server.login(EMAIL_ADDRESS, EMAIL_PASSWORD)
    server.sendmail(EMAIL_ADDRESS, "daltonam@uindy.edu", msg.as_string())

print("Email sent successfully!")
