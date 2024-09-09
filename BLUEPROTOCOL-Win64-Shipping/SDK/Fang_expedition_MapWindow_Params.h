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
	 * Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.UpdateMapIconNewMark
	 */
	struct UFang_expedition_MapWindow_C_UpdateMapIconNewMark_Params
	{
	public:
		class FString                                              InId;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.OnPaint
	 */
	struct UFang_expedition_MapWindow_C_OnPaint_Params
	{
	public:
		struct FPaintContext                                       Context;                                                 // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.SetCloudPosition
	 */
	struct UFang_expedition_MapWindow_C_SetCloudPosition_Params
	{
	public:
		class FString                                              TraverseName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UCanvasPanelSlot*                                    CanvasSlot;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.SetIconPositionData
	 */
	struct UFang_expedition_MapWindow_C_SetIconPositionData_Params
	{
	public:
		class UCanvasPanelSlot*                                    CanvasSlot;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Position;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.ClearIcon
	 */
	struct UFang_expedition_MapWindow_C_ClearIcon_Params
	{	};

	/**
	 * Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.SetExpeditionData
	 */
	struct UFang_expedition_MapWindow_C_SetExpeditionData_Params
	{
	public:
		class FString                                              Field;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FSBFang_expeditionData                              ExpeditionData;                                          // 0x0010(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.SetMapId
	 */
	struct UFang_expedition_MapWindow_C_SetMapId_Params
	{
	public:
		class FString                                              MapId;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.Construct
	 */
	struct UFang_expedition_MapWindow_C_Construct_Params
	{	};

	/**
	 * Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.IconClickWork
	 */
	struct UFang_expedition_MapWindow_C_IconClickWork_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.Destruct
	 */
	struct UFang_expedition_MapWindow_C_Destruct_Params
	{	};

	/**
	 * Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.BndEvt__Fang_expedition_MapWindow_DebugButton1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UFang_expedition_MapWindow_C_BndEvt__Fang_expedition_MapWindow_DebugButton1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.IconGroupClick
	 */
	struct UFang_expedition_MapWindow_C_IconGroupClick_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.ExecuteUbergraph_Fang_expedition_MapWindow
	 */
	struct UFang_expedition_MapWindow_C_ExecuteUbergraph_Fang_expedition_MapWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FFWI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.OnMapIconGroupClick__DelegateSignature
	 */
	struct UFang_expedition_MapWindow_C_OnMapIconGroupClick__DelegateSignature_Params
	{
	public:
		struct FSBFang_expeditionIconData                          IconData;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.OnMapIconClick__DelegateSignature
	 */
	struct UFang_expedition_MapWindow_C_OnMapIconClick__DelegateSignature_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
