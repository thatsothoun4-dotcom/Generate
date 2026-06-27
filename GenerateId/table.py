"""
Generate a Bar Chart and a Pie Chart from the Event Text frequency table.
Requires: matplotlib  (pip install matplotlib)
"""

import matplotlib.pyplot as plt
 

# --- Data from the frequency table ---
categories = [
    "Normal Power Mode",
    "Panel Close Request",
    "Battery Normal",
    "SCTM Type Switch",
    "Switch Disconnected",
    "Maintenance Required",
    "Auxiliary Supply Failure",
]
frequencies = [45, 38, 22, 19, 15, 12, 12]

# ---------------------------------------------------------
# 1. Bar Chart
# ---------------------------------------------------------
plt.figure(figsize=(10, 6))
bars = plt.bar(categories, frequencies, color="steelblue", edgecolor="black")

plt.title("Bar Chart of Event Text Frequency", fontsize=14, fontweight="bold")
plt.xlabel("Event Text (Category)")
plt.ylabel("Frequency")
plt.xticks(rotation=35, ha="right")

# Add frequency labels on top of each bar
for bar in bars:
    height = bar.get_height()
    plt.text(bar.get_x() + bar.get_width() / 2, height + 0.5,
              str(height), ha="center", va="bottom", fontsize=9)

plt.tight_layout()
plt.savefig("bar_chart.png", dpi=200)
plt.close()

# ---------------------------------------------------------
# 2. Pie Chart
# ---------------------------------------------------------
plt.figure(figsize=(8, 8))
plt.pie(
    frequencies,
    labels=categories,
    autopct="%1.1f%%",
    startangle=90,
    textprops={"fontsize": 9},
)
plt.title("Pie Chart of Event Text Frequency", fontsize=14, fontweight="bold")
plt.tight_layout()
plt.savefig("pie_chart.png", dpi=200)
plt.close()

print("Saved: bar_chart.png and pie_chart.png")