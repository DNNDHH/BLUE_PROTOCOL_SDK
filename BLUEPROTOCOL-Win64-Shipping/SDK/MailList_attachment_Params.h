#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MailList_attachment.MailList_attachment_C.SetToolTips
	 */
	struct UMailList_attachment_C_SetToolTips_Params
	{	};

	/**
	 * Function MailList_attachment.MailList_attachment_C.UpdateStorageIcon
	 */
	struct UMailList_attachment_C_UpdateStorageIcon_Params
	{	};

	/**
	 * Function MailList_attachment.MailList_attachment_C.UpdateIconExtraData
	 */
	struct UMailList_attachment_C_UpdateIconExtraData_Params
	{	};

	/**
	 * Function MailList_attachment.MailList_attachment_C.SetAttentionStatus
	 */
	struct UMailList_attachment_C_SetAttentionStatus_Params
	{
	public:
		int32_t                                                    Status;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MailList_attachment.MailList_attachment_C.SetViewType
	 */
	struct UMailList_attachment_C_SetViewType_Params
	{
	public:
		ESBMailAttachmentViewType                                  Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7NIR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MailList_attachment.MailList_attachment_C.SetMoney
	 */
	struct UMailList_attachment_C_SetMoney_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WYIX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MailList_attachment.MailList_attachment_C.Construct
	 */
	struct UMailList_attachment_C_Construct_Params
	{	};

	/**
	 * Function MailList_attachment.MailList_attachment_C.ExecuteUbergraph_MailList_attachment
	 */
	struct UMailList_attachment_C_ExecuteUbergraph_MailList_attachment_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
