# Arduino-LED-PersonalResearch <br />利用微控制器操控LED板或LED燈條(個人研究)

## 簡介
此為個人興趣研究項目，主要研究ESP32微控制器來操控LED板或LED燈條來播放自定義動畫，同時操控MP3模組播放音樂。
## 使用工具
1. ESP32微控制器
1. LED板或LED燈條
1. MP3模組
1. 社邦線
## 程式使用流程
當微控制器連接電源後，會自動播放自定義動畫，同時喇叭會播放音樂。
## 程式圖片
![This is a alt text.](https://lh3.googleusercontent.com/0mm78gvOxgSjgYrLaDLGAkmObRyA5tQqUsUFCri8PC2OISghkqIxOAF7Dj11yLaGqwvcN7sojgHPLmH5epk2vNRuQNMfJFuRAYAqZuGue3KJODrKGwOA7eGQz1Jb4dY_AiDjQarZ8W7QVWQG1ZY1ogG5ydkDid2IznjOdT1wQ_7Za-foH0X3jWzXEaQH_A3wNX37yOcdMe7QPp3DJDSirg5L-DBkpcK2TEek4A6uo_9aeptu7kRI51m7mxSlu6PIvBlziN9pzEf8BofnCNrWGo4pjYazD1I1JtuOIYNjRsoYWuh72bW0386HhEPRKfk9-CUH2i9AKHq8JSPKXyHsOW3ApySAdsxqfR4EnJ_HYOUVNUNTguksgFlPLr7oohhtusOkxvhvzHzBW9wVgYgnsFKGsfT7d7v6T1ib-l9u6ri-AgWQZxsfezGP8xhBIcmQdLcBddK05TS2quFAb6_xSxSOWCeejk1Me7bWBjphTCPUM1aTVFsQMVcrpMCbFpEGdiaI3mS63vV31QMqAERat27C_w5R5FP1zfx18gZPl0idKZf0XY2J3hIRp37UsfqsXfoD7cXdLU7p175_qA5C9rXGJz2_Desukm3LJpwQryzOId8U-7ovf7Xt9TQ_lJBbwJRahRyx2SdiaXP23SjMrV9hxok0Sqmpf84sbxx34jNSX16vRRPCoZgTu0VfbMfGpy5z81Hs0FcgLA-5FULcOuvb=w634-h845-no?authuser=2)
![This is a alt text.](https://lh3.googleusercontent.com/fH7tetjLm_lqG0bL-DC9EjMcl7RfNs4Uufl3w178pjncygToKKWyKNF_1zBGftgY6NXcXiuZczMSX3VPThgMfthLVX4UNnMeXTps18dV-t5PI-PiGoi51zthjySV_x0GOfDy7GsszBHPN96AOqpo1RECeOPmWUBTwk5Ee5XC-Rb-JOloO21MmTbSj_BucX_Mnx2vgi4bfdPTuuw5N9kk544lzxeCNXqBDgKv9oXocMbckj7AnlE6QuJkQaRzrsYp42Q0DEET3EdXLSPUrieyZEIna7_hraSVq37Z9Kd3NyOEHwCqDdsaWueGVX8cX3XzFHVXRHkBhDNskpTxICD8imuGb10KxMqnd2j0RkTjNM7aEivls8X15CR1rxjLe2WSmJQ57pnvdhO6b6tI25zBZKRxmUAE-WNE1U1DEyIw6iZXR4RZ6wH2PUoavnecUxTQn0LDzaR45Kuaif10TyPX7AFDaSJE0cyltPXUnBstQ-_CdlXglR5MKdxLuQiEbBHOkmitgM7JPK6UQ1LPQSTJvZqAGttJ-NpbAQLvbHV7hIQ4YnbT6cNCAcRO3PJsROt9TMtPmQH2iwioDudwtlhMA2QmIsh5Oai7Ct337JXxsiMlRwwAUr-Eisnh0m7pdyOkCC2tV-gMEn1xf_52GR_8ZMS7JEGAil9YJWg_mzJh0TbkWeLNbTQUQZiXtCKrGy3Ga0SeTkMGirUTEciAhmg8fQSx=w634-h845-no?authuser=2)
![This is a alt text.](https://lh3.googleusercontent.com/DJil8qDzcoGGemXnMaQnV0FezlX3LexF7OIDGbiXBbVRRBNPHYUj7DaUOJTAukNLLe1f-tAY1H1l-SF2ve7Nfou43A5h8_qBTuKNCHg4dyhbknDYb79U1xz234Z1_knT8iCQievy2BIuQere-IyVk1lJQYV4aIhAW26QnDBL9U5Ibg0rX4E-4-3GgrZidCKICXLA7SuS8U78Mf_vxde5ld4hnZCNl6rvD8281h_gWGwToIKQ8eCYn8iqCQLfzjRTmtz-drMGqRatfxE4uTEtCpdDIM4MXdsARouiJMM2nSkNjVqZ__MMLArcVSwh81znQpfkm6fJS859EHKIuKonceJ5-5trsQ6PJtlRSUKCQkQn2cldTcv8dZzWgHXjNh0UWdXTG_394Y4fXgId3M-v0b87IHJm5Ry_9LZWmnifoTYPGJuUjPSLdztsNe2656WEXL0p1z3IafnVCR7k3V1lc3PsKbsXOhXvwCcbhqLs9KOpWrWF5C2UklfuuE8yM_YNi9AB8jqhDo55J7FGnWxTo8AGPTFuZk50Eb-lqZvjjvw1YSrb46LgcobYTaFgLfRGTGb7tQRj_4DbSumnM0waGN7MKals5t4lGi84M8KNEbiWdvbKgp_c8KEcNuQLdxBwEwpTBBqf9IgOfwSzo0r2eGtI-sxQoBNW6vImj0INVbjk5vziPQxXvfjA1WBdUReqqrfhAB44RYe4mss4sBjvst0i=w1127-h845-no?authuser=2)
