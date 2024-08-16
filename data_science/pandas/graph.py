import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import matplotlib

df = pd.read_csv("score.csv")
df.set_index("number", inplace=True)


matplotlib.rcParams["font.size"] = 5

plt.figure(dpi=500)
plt.plot(df["Name"], df["Korean"])
plt.plot(df["Name"], df["English"])
plt.title("Korean score and English score")

plt.savefig("foo.png")
plt.show()