#include <stdio.h>
#include <string.h>
#include "esp_http_client.h"
#include "esp_log.h"
#include "esp_mail.h"

// SMTP Server Settings
#define SMTP_SERVER "smtp.example.com"
#define SMTP_PORT 587
#define SMTP_USERNAME "your_email@example.com"
#define SMTP_PASSWORD "your_app_password"
#define SENDER_EMAIL "your_email@example.com"
#define RECIPIENT_EMAIL "recipient@example.com"
#define EMAIL_SUBJECT "Mailbox Alert"
#define EMAIL_BODY "Your outgoing mail has been picked up by a mail carrier."

// Function to send email
void send_email() {
    esp_mail_client_init(SMTP_USERNAME, SMTP_PASSWORD, SMTP_SERVER, SMTP_PORT);
    esp_mail_client_send_email(SENDER_EMAIL, RECIPIENT_EMAIL, EMAIL_SUBJECT, EMAIL_BODY);
    esp_mail_client_deinit();
}

void app_main() {
    send_email();
}
