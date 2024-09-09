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
	 * Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.Set OrnamentStorage
	 */
	struct UMailListAttachmentContainerBox_C_SetOrnamentStorage_Params
	{	};

	/**
	 * Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.AddSallItemInfo
	 */
	struct UMailListAttachmentContainerBox_C_AddSallItemInfo_Params
	{
	public:
		struct FOwnItemInfo                                        SallInfo;                                                // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.Add RewardType
	 */
	struct UMailListAttachmentContainerBox_C_AddRewardType_Params
	{
	public:
		struct FSBMailAttachment                                   NewItem;                                                 // 0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       IsNew;                                                   // 0x0040(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MTYH[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.AddItemInfo
	 */
	struct UMailListAttachmentContainerBox_C_AddItemInfo_Params
	{
	public:
		struct FOwnItemInfo                                        NewItem;                                                 // 0x0000(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.AddVanishData
	 */
	struct UMailListAttachmentContainerBox_C_AddVanishData_Params
	{
	public:
		struct FSBMailAttachment                                   VanishItem;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.Set Other
	 */
	struct UMailListAttachmentContainerBox_C_SetOther_Params
	{	};

	/**
	 * Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.Set Bag
	 */
	struct UMailListAttachmentContainerBox_C_SetBag_Params
	{
	public:
		bool                                                       bEquip;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.Set Storage
	 */
	struct UMailListAttachmentContainerBox_C_SetStorage_Params
	{	};

	/**
	 * Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.SetStorageText
	 */
	struct UMailListAttachmentContainerBox_C_SetStorageText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.IsDuplicateType
	 */
	struct UMailListAttachmentContainerBox_C_IsDuplicateType_Params
	{
	public:
		ESBRewardItemType                                          ItemType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Duplicate;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.UpdateVanishedTooltip
	 */
	struct UMailListAttachmentContainerBox_C_UpdateVanishedTooltip_Params
	{
	public:
		class UCommonIcon_C*                                       Icon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBMailAttachment                                   AttachmentData;                                          // 0x0008(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsTooltipChange;                                         // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VL15[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.SetSoldProfit
	 */
	struct UMailListAttachmentContainerBox_C_SetSoldProfit_Params
	{
	public:
		class UCommonIcon_C*                                       Icon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBMailAttachment                                   MailData;                                                // 0x0008(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.ItemTooltipCheck
	 */
	struct UMailListAttachmentContainerBox_C_ItemTooltipCheck_Params
	{
	public:
		struct FOwnItemInfo                                        ItemInfo;                                                // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UCommonIcon_C*                                       Icon;                                                    // 0x0150(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.SetMailExtraData
	 */
	struct UMailListAttachmentContainerBox_C_SetMailExtraData_Params
	{
	public:
		class UCommonIcon_C*                                       Icon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBMailAttachment                                   AttachmentData;                                          // 0x0008(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.CreateIcon
	 */
	struct UMailListAttachmentContainerBox_C_CreateIcon_Params
	{
	public:
		int32_t                                                    A;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U9WO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBMailAttachment                                   Attachment;                                              // 0x0008(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UCommonIcon_C*                                       Icon;                                                    // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.GenerateItemIcons
	 */
	struct UMailListAttachmentContainerBox_C_GenerateItemIcons_Params
	{	};

	/**
	 * Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.PreConstruct
	 */
	struct UMailListAttachmentContainerBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.ExecuteUbergraph_MailListAttachmentContainerBox
	 */
	struct UMailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
