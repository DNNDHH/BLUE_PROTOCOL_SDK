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
	 * Function MapWidget_PinIconList.MapWidget_PinIconList_C.SetAllPinIconEnable
	 */
	struct UMapWidget_PinIconList_C_SetAllPinIconEnable_Params
	{
	public:
		bool                                                       IsEnable;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIncludeEraser;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3NZP[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget_PinIconList.MapWidget_PinIconList_C.SetPinIconEnable
	 */
	struct UMapWidget_PinIconList_C_SetPinIconEnable_Params
	{
	public:
		EMapPinType                                                InPinType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsEnable;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_PinIconList.MapWidget_PinIconList_C.Construct
	 */
	struct UMapWidget_PinIconList_C_Construct_Params
	{	};

	/**
	 * Function MapWidget_PinIconList.MapWidget_PinIconList_C.PinIconPressed
	 */
	struct UMapWidget_PinIconList_C_PinIconPressed_Params
	{
	public:
		class UMapWidget_PinIconBtn_C*                             InPressedIcon;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_PinIconList.MapWidget_PinIconList_C.Destruct
	 */
	struct UMapWidget_PinIconList_C_Destruct_Params
	{	};

	/**
	 * Function MapWidget_PinIconList.MapWidget_PinIconList_C.OnPinIconBtnPressed
	 */
	struct UMapWidget_PinIconList_C_OnPinIconBtnPressed_Params
	{
	public:
		class UMapWidget_PinIconBtn_C*                             InPressedIcon;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_PinIconList.MapWidget_PinIconList_C.OnPinEraserIconBtnPressed
	 */
	struct UMapWidget_PinIconList_C_OnPinEraserIconBtnPressed_Params
	{
	public:
		class UMapWidget_PinEraserIconBtn_C*                       InPressedIcon;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_PinIconList.MapWidget_PinIconList_C.EraserIconPressed
	 */
	struct UMapWidget_PinIconList_C_EraserIconPressed_Params
	{	};

	/**
	 * Function MapWidget_PinIconList.MapWidget_PinIconList_C.ExecuteUbergraph_MapWidget_PinIconList
	 */
	struct UMapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_PinIconList.MapWidget_PinIconList_C.OnPinIconSelected__DelegateSignature
	 */
	struct UMapWidget_PinIconList_C_OnPinIconSelected__DelegateSignature_Params
	{
	public:
		EMapPinType                                                InSelectedPinType;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
