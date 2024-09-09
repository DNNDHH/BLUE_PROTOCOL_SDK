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
	 * Function SBTextKeyIcon.SBTextKeyIcon_C.GetText
	 */
	struct USBTextKeyIcon_C_GetText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SBTextKeyIcon.SBTextKeyIcon_C.SetText
	 */
	struct USBTextKeyIcon_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SBTextKeyIcon.SBTextKeyIcon_C.GetActionKeyTextGamePad
	 */
	struct USBTextKeyIcon_C_GetActionKeyTextGamePad_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBKeyConfigAction                                         KeyConfigActionPad;                                      // 0x01D0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KEIJ[0x7];                                   // 0x01D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x01D8(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SBTextKeyIcon.SBTextKeyIcon_C.GetActionKeyTextKB
	 */
	struct USBTextKeyIcon_C_GetActionKeyTextKB_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBKeyConfigAction                                         KeyConfigActionKB;                                       // 0x01D0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SXGP[0x7];                                   // 0x01D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x01D8(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SBTextKeyIcon.SBTextKeyIcon_C.GetActionKeyText
	 */
	struct USBTextKeyIcon_C_GetActionKeyText_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBKeyConfigAction                                         KeyConfigActionKB;                                       // 0x01D0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBKeyConfigAction                                         KeyConfigActionPad;                                      // 0x01D1(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z0AE[0x6];                                   // 0x01D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x01D8(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SBTextKeyIcon.SBTextKeyIcon_C.GetDisplayTextByKey
	 */
	struct USBTextKeyIcon_C_GetDisplayTextByKey_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       bReplaceFunction;                                        // 0x0018(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D9GP[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function SBTextKeyIcon.SBTextKeyIcon_C.SetDisplayTextByKey
	 */
	struct USBTextKeyIcon_C_SetDisplayTextByKey_Params
	{
	public:
		struct FKey                                                InKey;                                                   // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       bReplaceFunction;                                        // 0x0018(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BMWV[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SBTextKeyIcon.SBTextKeyIcon_C.GetDisplayTextByAction
	 */
	struct USBTextKeyIcon_C_GetDisplayTextByAction_Params
	{
	public:
		ESBUIKeyConfigAction                                       KeyConfigAction;                                         // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_75SD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function SBTextKeyIcon.SBTextKeyIcon_C.SetDisplayTextByAction
	 */
	struct USBTextKeyIcon_C_SetDisplayTextByAction_Params
	{
	public:
		ESBUIKeyConfigAction                                       KeyConfigAction;                                         // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VN8W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SBTextKeyIcon.SBTextKeyIcon_C.SetDisplayTextByKBPad2
	 */
	struct USBTextKeyIcon_C_SetDisplayTextByKBPad2_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBKeyConfigAction                                         KeyConfigActionKB;                                       // 0x01D0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBKeyConfigAction                                         KeyConfigActionPad;                                      // 0x01D1(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CEWZ[0x6];                                   // 0x01D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SBTextKeyIcon.SBTextKeyIcon_C.SetDisplayTextByKBPad1
	 */
	struct USBTextKeyIcon_C_SetDisplayTextByKBPad1_Params
	{
	public:
		ESBKeyConfigAction                                         KeyConfigActionKB;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBKeyConfigAction                                         KeyConfigActionPad;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SBTextKeyIcon.SBTextKeyIcon_C.BindUpdateOperationMode
	 */
	struct USBTextKeyIcon_C_BindUpdateOperationMode_Params
	{	};

	/**
	 * Function SBTextKeyIcon.SBTextKeyIcon_C.UnbindUpdateOperationMode
	 */
	struct USBTextKeyIcon_C_UnbindUpdateOperationMode_Params
	{	};

	/**
	 * Function SBTextKeyIcon.SBTextKeyIcon_C.CustomEvent_5
	 */
	struct USBTextKeyIcon_C_CustomEvent_5_Params
	{	};

	/**
	 * Function SBTextKeyIcon.SBTextKeyIcon_C.BindChangePadSkinType
	 */
	struct USBTextKeyIcon_C_BindChangePadSkinType_Params
	{	};

	/**
	 * Function SBTextKeyIcon.SBTextKeyIcon_C.UnbindChangePadSkinType
	 */
	struct USBTextKeyIcon_C_UnbindChangePadSkinType_Params
	{	};

	/**
	 * Function SBTextKeyIcon.SBTextKeyIcon_C.CustomEvent_6
	 */
	struct USBTextKeyIcon_C_CustomEvent_6_Params
	{
	public:
		ESBPadKeySkinType                                          SkinType;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SBTextKeyIcon.SBTextKeyIcon_C.BindConfigSave
	 */
	struct USBTextKeyIcon_C_BindConfigSave_Params
	{	};

	/**
	 * Function SBTextKeyIcon.SBTextKeyIcon_C.UnbindConfigSave
	 */
	struct USBTextKeyIcon_C_UnbindConfigSave_Params
	{	};

	/**
	 * Function SBTextKeyIcon.SBTextKeyIcon_C.CustomEvent
	 */
	struct USBTextKeyIcon_C_CustomEvent_Params
	{	};

	/**
	 * Function SBTextKeyIcon.SBTextKeyIcon_C.BindUpdateKeyConfig
	 */
	struct USBTextKeyIcon_C_BindUpdateKeyConfig_Params
	{	};

	/**
	 * Function SBTextKeyIcon.SBTextKeyIcon_C.UnbindUpdateKeyConfig
	 */
	struct USBTextKeyIcon_C_UnbindUpdateKeyConfig_Params
	{	};

	/**
	 * Function SBTextKeyIcon.SBTextKeyIcon_C.PreConstruct
	 */
	struct USBTextKeyIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SBTextKeyIcon.SBTextKeyIcon_C.Construct
	 */
	struct USBTextKeyIcon_C_Construct_Params
	{	};

	/**
	 * Function SBTextKeyIcon.SBTextKeyIcon_C.Destruct
	 */
	struct USBTextKeyIcon_C_Destruct_Params
	{	};

	/**
	 * Function SBTextKeyIcon.SBTextKeyIcon_C.ExecuteUbergraph_SBTextKeyIcon
	 */
	struct USBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SBTextKeyIcon.SBTextKeyIcon_C.OnUpdateKeyConfig__DelegateSignature
	 */
	struct USBTextKeyIcon_C_OnUpdateKeyConfig__DelegateSignature_Params
	{	};

	/**
	 * Function SBTextKeyIcon.SBTextKeyIcon_C.OnChangePadSkinType__DelegateSignature
	 */
	struct USBTextKeyIcon_C_OnChangePadSkinType__DelegateSignature_Params
	{	};

	/**
	 * Function SBTextKeyIcon.SBTextKeyIcon_C.OnUpdateOperationMode__DelegateSignature
	 */
	struct USBTextKeyIcon_C_OnUpdateOperationMode__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
