import time
from selenium import webdriver
from selenium.webdriver import Keys
from selenium.webdriver.chrome.service import Service as ChromeService
from selenium.webdriver.common.by import By
from selenium.webdriver.chrome.options import Options
from webdriver_manager.chrome import ChromeDriverManager

# Set up Chrome options
chrome_options = Options()
chrome_options.add_argument("--disable-blink-features=AutomationControlled")  # Avoid detection
chrome_options.add_argument("user-agent=Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36")  # Fake User-Agent
chrome_options.add_experimental_option("excludeSwitches", ["enable-automation"])  # Remove automation flag
chrome_options.add_experimental_option("useAutomationExtension", False)

# Start WebDriver
driver = webdriver.Chrome(service=ChromeService(ChromeDriverManager().install()), options=chrome_options)

# driver.get("https://google.com")
#
# # Locate search box and enter text
# googleSearchBox = driver.find_element(By.NAME, "q")  # Changed from CLASS_NAME to NAME
# googleSearchBox.send_keys("Automation")
# time.sleep(1)  # Pause before hitting enter
# googleSearchBox.send_keys(Keys.RETURN)
# # driver.find_element(By.NAME, "btnK").click()
#
# time.sleep(2)  # Allow search results to load
# driver.quit()  # Use quit() instead of close() to cleanly exit



driver.get("https://trytestingthis.netlify.app/index.html")
driver.find_element(By.ID, "fname").send_keys("Anshul")
driver.find_element(By.ID, "lname").send_keys("Yadav")
time.sleep(2)
driver.find_element(By.XPATH, "//button[@class='btn btn-success']").click()
time.sleep(2)

driver.quit()
print("Testcase2 completed")