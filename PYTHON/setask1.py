import matplotlib.pyplot as plt
import numpy as np

def quadratic_model(time):
    a=0.1
    b=-1
    c=30

    temparature=a*(time**2)+b(time)+c
    return temparature

def main():
    time_values=np.linespace(0,10,50)
    temparature_hradcoded=quadratic_model(time_values)

    plt.plot(time_values,temparature_hradcoded,label="hardcoded coefficient")
    plt.xlabel("time")
    plt.ylabel("hardcoded variables")
    plt.legend()
    plt.title("weather modelling with quadratic equation")
    plt.show()

if __name__=="__main__":
    main()