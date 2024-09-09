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
	 * Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.SetFuncIconVisibility
	 */
	struct UMapWidget_FuncIconList_C_SetFuncIconVisibility_Params
	{
	public:
		EMapFuncIconType                                           InFuncIconType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsVisible;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HP1F[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.SetFuncIconEnable
	 */
	struct UMapWidget_FuncIconList_C_SetFuncIconEnable_Params
	{
	public:
		EMapFuncIconType                                           InFuncIconType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsEnable;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A01Y[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.Construct
	 */
	struct UMapWidget_FuncIconList_C_Construct_Params
	{	};

	/**
	 * Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.FuncIconPressed
	 */
	struct UMapWidget_FuncIconList_C_FuncIconPressed_Params
	{
	public:
		class UMapWidget_FuncIconItem_C*                           InPressedIcon;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.OnIconPressedEvent
	 */
	struct UMapWidget_FuncIconList_C_OnIconPressedEvent_Params
	{
	public:
		class UMapWidget_FuncIconItem_C*                           InPressedIcon;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.Destruct
	 */
	struct UMapWidget_FuncIconList_C_Destruct_Params
	{	};

	/**
	 * Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.ExecuteUbergraph_MapWidget_FuncIconList
	 */
	struct UMapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.OnFuncIconSelected__DelegateSignature
	 */
	struct UMapWidget_FuncIconList_C_OnFuncIconSelected__DelegateSignature_Params
	{
	public:
		EMapFuncIconType                                           InSelectedFuncIconType;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
