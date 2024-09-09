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
	 * Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.IsAccepted
	 */
	struct UMailAttachmentAcceptHead_C_IsAccepted_Params
	{
	public:
		bool                                                       Accept;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.isAnyDuplicate
	 */
	struct UMailAttachmentAcceptHead_C_isAnyDuplicate_Params
	{
	public:
		bool                                                       Duplicate;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A8ES[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.isAnyOverFlow
	 */
	struct UMailAttachmentAcceptHead_C_isAnyOverFlow_Params
	{
	public:
		bool                                                       Overflow;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RURH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.GenerateAttachmentList
	 */
	struct UMailAttachmentAcceptHead_C_GenerateAttachmentList_Params
	{	};

	/**
	 * Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.FindAttachments
	 */
	struct UMailAttachmentAcceptHead_C_FindAttachments_Params
	{
	public:
		struct FSBMailAttachment                                   Find;                                                    // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Attachment;                                              // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.Get Storage Text
	 */
	struct UMailAttachmentAcceptHead_C_GetStorageText_Params
	{
	public:
		int32_t                                                    StorageNo;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0T6P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Text;                                                    // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.PreConstruct
	 */
	struct UMailAttachmentAcceptHead_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.SetStorageNo
	 */
	struct UMailAttachmentAcceptHead_C_SetStorageNo_Params
	{
	public:
		int32_t                                                    StorageNo;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.AddAttachment
	 */
	struct UMailAttachmentAcceptHead_C_AddAttachment_Params
	{
	public:
		struct FSBMailAttachment                                   inAttachment;                                            // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.BndEvt__MailAttachmentAcceptHead_Expandable_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature
	 */
	struct UMailAttachmentAcceptHead_C_BndEvt__MailAttachmentAcceptHead_Expandable_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature_Params
	{
	public:
		class UExpandableArea*                                     Area;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsExpanded;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.ExecuteUbergraph_MailAttachmentAcceptHead
	 */
	struct UMailAttachmentAcceptHead_C_ExecuteUbergraph_MailAttachmentAcceptHead_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
