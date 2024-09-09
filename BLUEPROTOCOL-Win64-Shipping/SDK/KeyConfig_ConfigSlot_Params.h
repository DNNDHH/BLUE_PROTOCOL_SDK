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
	 * Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.GetPadAssignedColor
	 */
	struct UKeyConfig_ConfigSlot_C_GetPadAssignedColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.GetKBAssignedColor
	 */
	struct UKeyConfig_ConfigSlot_C_GetKBAssignedColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.Is KB Need Assigned
	 */
	struct UKeyConfig_ConfigSlot_C_IsKBNeedAssigned_Params
	{
	public:
		bool                                                       IsNeedAssined;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.Is Pad Need Assigned
	 */
	struct UKeyConfig_ConfigSlot_C_IsPadNeedAssigned_Params
	{
	public:
		bool                                                       IsNeedAssined;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.InitializeNeedType
	 */
	struct UKeyConfig_ConfigSlot_C_InitializeNeedType_Params
	{	};

	/**
	 * Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.ConvertBookMark
	 */
	struct UKeyConfig_ConfigSlot_C_ConvertBookMark_Params
	{
	public:
		EConfig_KeyconfigItems                                     ConfigType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsValid;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBBookMarkerSlot                                          Slot;                                                    // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DMBD[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.IsBookMarks
	 */
	struct UKeyConfig_ConfigSlot_C_IsBookMarks_Params
	{
	public:
		EConfig_KeyconfigItems                                     KeyConfigItems;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsBookMark;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QP6R[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.GetItemStringId
	 */
	struct UKeyConfig_ConfigSlot_C_GetItemStringId_Params
	{
	public:
		EConfig_KeyconfigItems                                     Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VN0H[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TextId;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.ResetInputMode
	 */
	struct UKeyConfig_ConfigSlot_C_ResetInputMode_Params
	{	};

	/**
	 * Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.BndEvt__KeyMouseInput_Btn_K2Node_ComponentBoundEvent_72_OnButtonClickedEvent__DelegateSignature
	 */
	struct UKeyConfig_ConfigSlot_C_BndEvt__KeyMouseInput_Btn_K2Node_ComponentBoundEvent_72_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.SetData
	 */
	struct UKeyConfig_ConfigSlot_C_SetData_Params
	{
	public:
		struct FKeyConfigType                                      ConfigData;                                              // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.CheckChanged
	 */
	struct UKeyConfig_ConfigSlot_C_CheckChanged_Params
	{
	public:
		bool                                                       bChanged;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.SetKeyMouse
	 */
	struct UKeyConfig_ConfigSlot_C_SetKeyMouse_Params
	{
	public:
		ESBKeyConfigKeyboardKey                                    KeyboardKey;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBKeyConfigMouseKey                                       MouseKey;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.SetGamePadButton
	 */
	struct UKeyConfig_ConfigSlot_C_SetGamePadButton_Params
	{
	public:
		ESBKeyConfigGamepadKey                                     Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSwichLR;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.KeyMouseChanged
	 */
	struct UKeyConfig_ConfigSlot_C_KeyMouseChanged_Params
	{
	public:
		bool                                                       KeyMouseChanged;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.PadChanged
	 */
	struct UKeyConfig_ConfigSlot_C_PadChanged_Params
	{
	public:
		bool                                                       PadChanged;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.ApplySlateWidget
	 */
	struct UKeyConfig_ConfigSlot_C_ApplySlateWidget_Params
	{	};

	/**
	 * Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.BndEvt__GamePadInput_Btn_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature
	 */
	struct UKeyConfig_ConfigSlot_C_BndEvt__GamePadInput_Btn_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.SetRequireSetting
	 */
	struct UKeyConfig_ConfigSlot_C_SetRequireSetting_Params
	{
	public:
		bool                                                       bRequire;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.ExecuteUbergraph_KeyConfig_ConfigSlot
	 */
	struct UKeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GPD2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.ButtonClicked_Pad__DelegateSignature
	 */
	struct UKeyConfig_ConfigSlot_C_ButtonClicked_Pad__DelegateSignature_Params
	{
	public:
		EConfig_KeyconfigItems                                     KeyType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NQA4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UKeyConfig_ConfigSlot_C*                             Caller;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.ButtonClicked_Key__DelegateSignature
	 */
	struct UKeyConfig_ConfigSlot_C_ButtonClicked_Key__DelegateSignature_Params
	{
	public:
		EConfig_KeyconfigItems                                     KeyType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y3PK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UKeyConfig_ConfigSlot_C*                             Caller;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.StartWaitInput__DelegateSignature
	 */
	struct UKeyConfig_ConfigSlot_C_StartWaitInput__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
