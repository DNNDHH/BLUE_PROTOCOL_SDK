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
	 * Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.GetToolTipWidget_1
	 */
	struct UGuildAttributeIconBtn_C_GetToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.SetChecked
	 */
	struct UGuildAttributeIconBtn_C_SetChecked_Params
	{
	public:
		bool                                                       bIsCheck;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IKV3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.GetAttrib
	 */
	struct UGuildAttributeIconBtn_C_GetAttrib_Params
	{
	public:
		EGuildAttribute                                            Attribute;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.IsCheck
	 */
	struct UGuildAttributeIconBtn_C_IsCheck_Params
	{
	public:
		bool                                                       IsCheck;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.OnLoaded_BBCADD534C9D43FF5AB95D8D8A7DF76A
	 */
	struct UGuildAttributeIconBtn_C_OnLoaded_BBCADD534C9D43FF5AB95D8D8A7DF76A_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.PreConstruct
	 */
	struct UGuildAttributeIconBtn_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.Construct
	 */
	struct UGuildAttributeIconBtn_C_Construct_Params
	{	};

	/**
	 * Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.Initialize Attribute
	 */
	struct UGuildAttributeIconBtn_C_InitializeAttribute_Params
	{	};

	/**
	 * Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.BndEvt__CB_Check_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UGuildAttributeIconBtn_C_BndEvt__CB_Check_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.Set Ediable
	 */
	struct UGuildAttributeIconBtn_C_SetEdiable_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.BndEvt__GuildAttributeIconBtn_CB_Check_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UGuildAttributeIconBtn_C_BndEvt__GuildAttributeIconBtn_CB_Check_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.BndEvt__GuildAttributeIconBtn_CB_Check_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UGuildAttributeIconBtn_C_BndEvt__GuildAttributeIconBtn_CB_Check_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.ExecuteUbergraph_GuildAttributeIconBtn
	 */
	struct UGuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_11L5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
