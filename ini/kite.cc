;设置规则标志位
surge_ruleset=直达,Rules/master/list/white.list
;surge_ruleset=自肃,Rules/master/list/mail.list
surge_ruleset=电报,rules/ACL4SSR/Clash/Telegram.list
surge_ruleset=媒体,rules/ACL4SSR/Clash/ProxyMedia.list
surge_ruleset=绕行,rules/ACL4SSR/Clash/ProxyGFWlist.list
surge_ruleset=直达,rules/ACL4SSR/Clash/Download.list
surge_ruleset=直达,rules/ACL4SSR/Clash/ChinaIp.list
surge_ruleset=直达,rules/ACL4SSR/Clash/LocalAreaNetwork.list
surge_ruleset=直达,rules/ACL4SSR/Clash/ChinaMedia.list
surge_ruleset=直达,rules/ACL4SSR/Clash/ChinaDomain.list
surge_ruleset=直达,rules/ACL4SSR/Clash/ChinaCompanyIp.list
surge_ruleset=终焉,[]FINAL
;设置规则标志位

;设置分组标志位
custom_proxy_group=绕行`select`[]香港`[]台湾`[]韩国`[]日本`[]美国`[]狮城`[]欧洲`[]加拿大
;custom_proxy_group=香港`url-test`(香港)`http://www.gstatic.com/generate_204`600,,200
custom_proxy_group=日本`url-test`(日本)`http://www.gstatic.com/generate_204`600,,200
custom_proxy_group=韩国`url-test`(韩国)`http://www.gstatic.com/generate_204`600,,200
custom_proxy_group=狮城`select`(新加坡)`http://www.gstatic.com/generate_204`600,,200
custom_proxy_group=台湾`url-test`(台湾)`http://www.gstatic.com/generate_204`600,,200
custom_proxy_group=欧洲`select`(荷兰|英国|俄|伦敦|瑞士)
custom_proxy_group=美国`select`(美国)
custom_proxy_group=加拿大`select`(加拿大)
;custom_proxy_group=自肃`select`[]绕行`[]香港`[]韩国`[]日本`[]
custom_proxy_group=电报`select`[]绕行`[]韩国`[]狮城
custom_proxy_group=直达`select`[]DIRECT`[]绕行
custom_proxy_group=媒体`select`[]绕行`[]日本`[]韩国`[]美国`[]直达
custom_proxy_group=终焉`select`[]绕行`[]直达
;设置分组标志位

enable_rule_generator=true
overwrite_original_rules=true

;设置自定义标志位
clash_rule_base=https://raw.githubusercontent.com/in-out/Rules/master/ini/fakeip.yml
;设置自定义标志位
