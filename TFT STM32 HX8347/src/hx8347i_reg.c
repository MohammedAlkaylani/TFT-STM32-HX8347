#include "hx8347i_reg.h"


/*******************************************************************************
  * Function Name : hx8347i_read_reg.
  * Description   : Generic Reading function.
  * Input         : Driver context, register Address, length of buffer.
  * Output        : Status.
  *******************************************************************************/
int32_t hx8347i_read_reg(HX8347I_ctx_t *ctx, uint16_t reg, uint8_t *data, uint32_t length)
{
  return ctx->ReadReg(ctx->handle, reg, data, length);
}

/*******************************************************************************
  * Function Name : hx8347i_write_reg.
  * Description   : Generic Writing function.
  * Input         : Driver context, Register Address, data to be written,
                  length of buffer.
  * Output        : Status.
  *******************************************************************************/
int32_t hx8347i_write_reg(HX8347I_ctx_t *ctx, uint16_t reg, uint8_t *data, uint32_t length)
{
  return ctx->WriteReg(ctx->handle, reg, data, length);
}
