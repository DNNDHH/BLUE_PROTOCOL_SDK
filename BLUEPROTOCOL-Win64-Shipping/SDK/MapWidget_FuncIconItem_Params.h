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
	 * Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.SetIconTextureByFuncIconType
	 */
	struct UMapWidget_FuncIconItem_C_SetIconTextureByFuncIconType_Params
	{
	public:
		EMapFuncIconType                                           InFuncIconType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OS96[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.SetTextId
	 */
	struct UMapWidget_FuncIconItem_C_SetTextId_Params
	{
	public:
		int32_t                                                    InTextId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.SetText
	 */
	struct UMapWidget_FuncIconItem_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.SetIconEnable
	 */
	struct UMapWidget_FuncIconItem_C_SetIconEnable_Params
	{
	public:
		bool                                                       IsEnable;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_428_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMapWidget_FuncIconItem_C_BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_428_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.ExecuteUbergraph_MapWidget_FuncIconItem
	 */
	struct UMapWidget_FuncIconItem_C_ExecuteUbergraph_MapWidget_FuncIconItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.OnPressed__DelegateSignature
	 */
	struct UMapWidget_FuncIconItem_C_OnPressed__DelegateSignature_Params
	{
	public:
		class UMapWidget_FuncIconItem_C*                           InPressedIcon;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
