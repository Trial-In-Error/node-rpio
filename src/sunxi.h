#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif
extern uint32_t readl(uint32_t addr);
extern void writel(uint32_t val, uint32_t addr);
extern uint32_t sunxi_get_gpio_mode(uint32_t pin);
extern void sunxi_gpio_fsel(uint32_t pin, uint8_t mode);
extern uint8_t sunxi_gpio_lev(uint32_t pin);
extern void sunxi_gpio_write(uint32_t pin, uint32_t on);
extern void sunxi_gpio_set_pud(uint32_t pin, uint8_t status);
extern void sunxi_pde_set_separator_duration(uint32_t pin, uint32_t duration);
extern void sunxi_pde_set_short_duration(uint32_t pin, uint32_t duration);
extern void sunxi_pde_set_long_duration(uint32_t pin, uint32_t duration);
extern void sunxi_pde_set_separator(uint32_t pin, uint32_t separator);
extern void sunxi_pde_write(uint32_t pin, char* buf, uint32_t len);
extern int sunxi_init(int);
#ifdef __cplusplus
}
#endif
