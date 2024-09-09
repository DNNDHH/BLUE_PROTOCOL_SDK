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
	 * Function MiniMapWidget.MiniMapWidget_C.OnUnbind
	 */
	struct UMiniMapWidget_C_OnUnbind_Params
	{	};

	/**
	 * Function MiniMapWidget.MiniMapWidget_C.OnBind
	 */
	struct UMiniMapWidget_C_OnBind_Params
	{	};

	/**
	 * Function MiniMapWidget.MiniMapWidget_C.OnLoaded_DA7A4A034051FF2A21620C9351A36972
	 */
	struct UMiniMapWidget_C_OnLoaded_DA7A4A034051FF2A21620C9351A36972_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapWidget.MiniMapWidget_C.UIVisibleSettingChangeDelegate_Event_1
	 */
	struct UMiniMapWidget_C_UIVisibleSettingChangeDelegate_Event_1_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MiniMapWidget.MiniMapWidget_C.UnbindVisibleSettingChangeDelegate
	 */
	struct UMiniMapWidget_C_UnbindVisibleSettingChangeDelegate_Params
	{	};

	/**
	 * Function MiniMapWidget.MiniMapWidget_C.BindVisibleSettingChangeDelegate
	 */
	struct UMiniMapWidget_C_BindVisibleSettingChangeDelegate_Params
	{	};

	/**
	 * Function MiniMapWidget.MiniMapWidget_C.PreConstruct
	 */
	struct UMiniMapWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MiniMapWidget.MiniMapWidget_C.LoadBG
	 */
	struct UMiniMapWidget_C_LoadBG_Params
	{	};

	/**
	 * Function MiniMapWidget.MiniMapWidget_C.ExecuteUbergraph_MiniMapWidget
	 */
	struct UMiniMapWidget_C_ExecuteUbergraph_MiniMapWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2YQY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
