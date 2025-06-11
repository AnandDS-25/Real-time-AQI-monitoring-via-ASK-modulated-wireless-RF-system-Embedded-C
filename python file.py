import numpy as np
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression

# Replace with your actual data
distances = [10, 20, 30, 40, 50]  # Example distance measurements (cm)
pm_values = [20, 35, 50, 65, 80]  # Corresponding PM concentrations

# Prepare data
distances_np = np.array(distances).reshape(-1, 1)
pm_values_np = np.array(pm_values)

# Create and fit the linear regression model
model = LinearRegression()
model.fit(distances_np, pm_values_np)

# Extract coefficients
slope = model.coef_[0]
intercept = model.intercept_

# Plot the calibration curve
plt.scatter(distances, pm_values, label='Data Points')
plt.plot(distances, model.predict(distances_np), color='red', label='Regression Line')
plt.xlabel('Distance (cm)')
plt.ylabel('PM Concentration')
plt.title('Calibration Curve')
plt.legend()
plt.show()

# Use the model to predict PM for a new distance
new_distance = 60
predicted_pm = model.predict([[new_distance]])
print("Predicted PM concentration:", predicted_pm[0])
