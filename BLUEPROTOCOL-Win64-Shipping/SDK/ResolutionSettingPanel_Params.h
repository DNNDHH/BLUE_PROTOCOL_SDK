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
	 * Function ResolutionSettingPanel.ResolutionSettingPanel_C.SetupResolutionList
	 */
	struct UResolutionSettingPanel_C_SetupResolutionList_Params
	{	};

	/**
	 * Function ResolutionSettingPanel.ResolutionSettingPanel_C.AddOptionByCustomSize
	 */
	struct UResolutionSettingPanel_C_AddOptionByCustomSize_Params
	{
	public:
		struct FIntPoint                                           Size;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResolutionSettingPanel.ResolutionSettingPanel_C.AddOptionBySize
	 */
	struct UResolutionSettingPanel_C_AddOptionBySize_Params
	{
	public:
		struct FIntPoint                                           Size;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResolutionSettingPanel.ResolutionSettingPanel_C.FindNearySupportedPoint
	 */
	struct UResolutionSettingPanel_C_FindNearySupportedPoint_Params
	{
	public:
		struct FIntPoint                                           Resolutions;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FIntPoint                                           Finded;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResolutionSettingPanel.ResolutionSettingPanel_C.GetFilteredResolutions
	 */
	struct UResolutionSettingPanel_C_GetFilteredResolutions_Params
	{
	public:
		TArray<struct FIntPoint>                                   FilterdResolutions;                                      // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function ResolutionSettingPanel.ResolutionSettingPanel_C.On_Cmb_Resolution_GenerateWidget_1
	 */
	struct UResolutionSettingPanel_C_On_Cmb_Resolution_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResolutionSettingPanel.ResolutionSettingPanel_C.ExecuteResolution Point
	 */
	struct UResolutionSettingPanel_C_ExecuteResolutionPoint_Params
	{
	public:
		struct FIntPoint                                           Size;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResolutionSettingPanel.ResolutionSettingPanel_C.Execure Resolution Str
	 */
	struct UResolutionSettingPanel_C_ExecureResolutionStr_Params
	{
	public:
		class FString                                              resStr;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResolutionSettingPanel.ResolutionSettingPanel_C.PreConstruct
	 */
	struct UResolutionSettingPanel_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ResolutionSettingPanel.ResolutionSettingPanel_C.Construct
	 */
	struct UResolutionSettingPanel_C_Construct_Params
	{	};

	/**
	 * Function ResolutionSettingPanel.ResolutionSettingPanel_C.OnSelectionChanged
	 */
	struct UResolutionSettingPanel_C_OnSelectionChanged_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResolutionSettingPanel.ResolutionSettingPanel_C.TimerEvt
	 */
	struct UResolutionSettingPanel_C_TimerEvt_Params
	{	};

	/**
	 * Function ResolutionSettingPanel.ResolutionSettingPanel_C.WindowMode
	 */
	struct UResolutionSettingPanel_C_WindowMode_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6Y1W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class URadioButton_C*                                      RadioButton;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResolutionSettingPanel.ResolutionSettingPanel_C.ShowConfirmDialog
	 */
	struct UResolutionSettingPanel_C_ShowConfirmDialog_Params
	{	};

	/**
	 * Function ResolutionSettingPanel.ResolutionSettingPanel_C.ExecuteUbergraph_ResolutionSettingPanel
	 */
	struct UResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
