#include "Payment.h"
#include <string>

// Helper function: Convert PaymentMode to string
std::string paymentModeToString(PaymentMode mode) {
    switch (mode) {
        case PaymentMode::PayPal:     return "PayPal";
        case PaymentMode::GooglePay:  return "GooglePay";
        case PaymentMode::CreditCard: return "Credit Card";
        default:                      return "Invalid";
    }
}

// Checkout logic (returns result instead of printing → testable)
std::string checkout(PaymentMode mode, double amount) {
    switch (mode) {
        case PaymentMode::PayPal:
        case PaymentMode::GooglePay:
        case PaymentMode::CreditCard:
            return "Processing " + paymentModeToString(mode) +
                   " payment of $" + std::to_string(amount);

        default:
            return "Invalid payment mode selected!";
    }
}
