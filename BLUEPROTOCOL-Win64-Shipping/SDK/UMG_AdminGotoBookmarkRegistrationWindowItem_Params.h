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
	 * Function UMG_AdminGotoBookmarkRegistrationWindowItem.UMG_AdminGotoBookmarkRegistrationWindowItem_C.SetText
	 */
	struct UUMG_AdminGotoBookmarkRegistrationWindowItem_C_SetText_Params
	{
	public:
		class FString                                              InText;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_AdminGotoBookmarkRegistrationWindowItem.UMG_AdminGotoBookmarkRegistrationWindowItem_C.GetText
	 */
	struct UUMG_AdminGotoBookmarkRegistrationWindowItem_C_GetText_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_AdminGotoBookmarkRegistrationWindowItem.UMG_AdminGotoBookmarkRegistrationWindowItem_C.PreConstruct
	 */
	struct UUMG_AdminGotoBookmarkRegistrationWindowItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_AdminGotoBookmarkRegistrationWindowItem.UMG_AdminGotoBookmarkRegistrationWindowItem_C.BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UUMG_AdminGotoBookmarkRegistrationWindowItem_C_BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UMG_AdminGotoBookmarkRegistrationWindowItem.UMG_AdminGotoBookmarkRegistrationWindowItem_C.ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindowItem
	 */
	struct UUMG_AdminGotoBookmarkRegistrationWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindowItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_AdminGotoBookmarkRegistrationWindowItem.UMG_AdminGotoBookmarkRegistrationWindowItem_C.OnTextChanged__DelegateSignature
	 */
	struct UUMG_AdminGotoBookmarkRegistrationWindowItem_C_OnTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
