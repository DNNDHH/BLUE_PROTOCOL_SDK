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
	 * Function KeyConfig_List.KeyConfig_List_C.ResetSliderChanged
	 */
	struct UKeyConfig_List_C_ResetSliderChanged_Params
	{	};

	/**
	 * Function KeyConfig_List.KeyConfig_List_C.UpdateData
	 */
	struct UKeyConfig_List_C_UpdateData_Params
	{	};

	/**
	 * Function KeyConfig_List.KeyConfig_List_C.CalcTop
	 */
	struct UKeyConfig_List_C_CalcTop_Params
	{
	public:
		int32_t                                                    Limit;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Top;                                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyConfig_List.KeyConfig_List_C.GetNoAssignedItemTop
	 */
	struct UKeyConfig_List_C_GetNoAssignedItemTop_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfig;                                               // 0x0000(0x01D0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		EConfig_KeyconfigItems                                     InputType;                                               // 0x01D0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6HSC[0x3];                                   // 0x01D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function KeyConfig_List.KeyConfig_List_C.ContainsNoAssignedKey
	 */
	struct UKeyConfig_List_C_ContainsNoAssignedKey_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfig;                                               // 0x0000(0x01D0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Assigned;                                                // 0x01D0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NRVW[0x3];                                   // 0x01D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function KeyConfig_List.KeyConfig_List_C.ResetInputModes
	 */
	struct UKeyConfig_List_C_ResetInputModes_Params
	{	};

	/**
	 * Function KeyConfig_List.KeyConfig_List_C.GetNoneTop
	 */
	struct UKeyConfig_List_C_GetNoneTop_Params
	{
	public:
		class UKeyConfig_ConfigSlot_C*                             AsKeyConfigConfigSlot;                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bChanged;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S5M8[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function KeyConfig_List.KeyConfig_List_C.HasNone
	 */
	struct UKeyConfig_List_C_HasNone_Params
	{
	public:
		bool                                                       bHasNone;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QTF0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function KeyConfig_List.KeyConfig_List_C.GetChangedTop
	 */
	struct UKeyConfig_List_C_GetChangedTop_Params
	{
	public:
		class UUserWidget*                                         Target;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bChanged;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_54I8[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function KeyConfig_List.KeyConfig_List_C.ApplyKeyConfigDatas
	 */
	struct UKeyConfig_List_C_ApplyKeyConfigDatas_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         SBPlayerClassKeyConfigData;                              // 0x0000(0x01D0)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function KeyConfig_List.KeyConfig_List_C.CreateChildWidget
	 */
	struct UKeyConfig_List_C_CreateChildWidget_Params
	{
	public:
		struct FKeyConfigType                                      ConfigureType;                                           // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UUserWidget*                                         Child;                                                   // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EConfig_KeyConfigItemType                                  ItemType;                                                // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AUZI[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function KeyConfig_List.KeyConfig_List_C.ApplyPadKeyConfig
	 */
	struct UKeyConfig_List_C_ApplyPadKeyConfig_Params
	{
	public:
		struct FSBGamePadSettings                                  SBGamePadSettings;                                       // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function KeyConfig_List.KeyConfig_List_C.ApplyKeyboardMouseData
	 */
	struct UKeyConfig_List_C_ApplyKeyboardMouseData_Params
	{
	public:
		struct FSBKeyboardSettings                                 SBKeyboardSettings;                                      // 0x0000(0x0098)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FSBMouseSettings                                    SBMouseSettings;                                         // 0x0098(0x0098)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function KeyConfig_List.KeyConfig_List_C.CheckChangedKey
	 */
	struct UKeyConfig_List_C_CheckChangedKey_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         Base;                                                    // 0x0000(0x01D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FSBPlayerClassKeyConfigData                         Now;                                                     // 0x01D0(0x01D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function KeyConfig_List.KeyConfig_List_C.OnChangeSlider
	 */
	struct UKeyConfig_List_C_OnChangeSlider_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Ratio;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EConfig_KeyconfigItems                                     Type;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZHNT[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UKeyConfig_Slider_C*                                 Target;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyConfig_List.KeyConfig_List_C.OnChangeRadio
	 */
	struct UKeyConfig_List_C_OnChangeRadio_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EConfig_KeyconfigItems                                     Type;                                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyConfig_List.KeyConfig_List_C.ApplySliders
	 */
	struct UKeyConfig_List_C_ApplySliders_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function KeyConfig_List.KeyConfig_List_C.ApplyRadio
	 */
	struct UKeyConfig_List_C_ApplyRadio_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function KeyConfig_List.KeyConfig_List_C.CheckChangedSlider
	 */
	struct UKeyConfig_List_C_CheckChangedSlider_Params
	{
	public:
		class UKeyConfig_Slider_C*                                 Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBPlayerClassKeyConfigData                         Base;                                                    // 0x0008(0x01D0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FSBPlayerClassKeyConfigData                         Now;                                                     // 0x01D8(0x01D0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function KeyConfig_List.KeyConfig_List_C.OnDeleteBookmarks
	 */
	struct UKeyConfig_List_C_OnDeleteBookmarks_Params
	{	};

	/**
	 * Function KeyConfig_List.KeyConfig_List_C.PreConstruct
	 */
	struct UKeyConfig_List_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyConfig_List.KeyConfig_List_C.KeyChangeWait
	 */
	struct UKeyConfig_List_C_KeyChangeWait_Params
	{
	public:
		EConfig_KeyconfigItems                                     KeyType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DSZL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UKeyConfig_ConfigSlot_C*                             Caller;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyConfig_List.KeyConfig_List_C.PadChangeWait
	 */
	struct UKeyConfig_List_C_PadChangeWait_Params
	{
	public:
		EConfig_KeyconfigItems                                     KeyType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TF6I[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UKeyConfig_ConfigSlot_C*                             Caller;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyConfig_List.KeyConfig_List_C.ScrollChangeTop
	 */
	struct UKeyConfig_List_C_ScrollChangeTop_Params
	{	};

	/**
	 * Function KeyConfig_List.KeyConfig_List_C.ScrollNoneTop
	 */
	struct UKeyConfig_List_C_ScrollNoneTop_Params
	{	};

	/**
	 * Function KeyConfig_List.KeyConfig_List_C.ExecuteUbergraph_KeyConfig_List
	 */
	struct UKeyConfig_List_C_ExecuteUbergraph_KeyConfig_List_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyConfig_List.KeyConfig_List_C.BookmarkDeletes__DelegateSignature
	 */
	struct UKeyConfig_List_C_BookmarkDeletes__DelegateSignature_Params
	{	};

	/**
	 * Function KeyConfig_List.KeyConfig_List_C.ChangeRadio__DelegateSignature
	 */
	struct UKeyConfig_List_C_ChangeRadio__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EConfig_KeyconfigItems                                     Type;                                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyConfig_List.KeyConfig_List_C.SliderChange__DelegateSignature
	 */
	struct UKeyConfig_List_C_SliderChange__DelegateSignature_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Ratio;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EConfig_KeyconfigItems                                     Type;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6OA2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UKeyConfig_Slider_C*                                 Target;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyConfig_List.KeyConfig_List_C.ClickedPadChangeWait__DelegateSignature
	 */
	struct UKeyConfig_List_C_ClickedPadChangeWait__DelegateSignature_Params
	{
	public:
		EConfig_KeyconfigItems                                     KeyType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyConfig_List.KeyConfig_List_C.ClickedKeyChangeWait__DelegateSignature
	 */
	struct UKeyConfig_List_C_ClickedKeyChangeWait__DelegateSignature_Params
	{
	public:
		EConfig_KeyconfigItems                                     KeyType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
