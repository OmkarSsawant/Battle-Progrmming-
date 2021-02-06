from selenium import webdriver
import os
import time
from selenium.webdriver.chrome.options import Options

class HackerRank:
    def __init__(self,username,password):
        self.username=username
        self.password=password
        self.driver=webdriver.Chrome('chromedriver.exe')
        self._HackerRank='https://www.hackerrank.com'

        self.login()






    def login(self):
         #open HackerRank
         self.driver.get('{}'.format(self._HackerRank))
         self.driver.find_element_by_xpath('//*[@id="post-71"]/div/div/div[1]/div/div/div/div/div/div[2]/div/div/a/span').click()
         self.driver.find_element_by_id('auth-login').click()
         self.driver.find_element_by_name('username').send_keys(self.username)
         self.driver.find_element_by_id('input-7').send_keys(self.password)
         self.driver.find_element_by_xpath('//*[@id="content"]/div/div/div[3]/div[2]/div/div/div[2]/div/div/div[2]/div[1]/form/div[4]/button/div/span').click()

         

        
   
   


if __name__=="__main__":
    HR_bot=HackerRank("""username ""","""password""")




