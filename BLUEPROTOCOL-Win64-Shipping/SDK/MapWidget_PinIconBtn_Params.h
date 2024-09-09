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
	 * Function MapWidget_PinIconBtn.MapWidget_PinIconBtn_C.SetIconBtnEnable
	 */
	struct UMapWidget_PinIconBtn_C_SetIconBtnEnable_Params
	{
	public:
		bool                                                       IsEnable;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_PinIconBtn.MapWidget_PinIconBtn_C.SetIconTextureByPinType
	 */
	struct UMapWidget_PinIconBtn_C_SetIconTextureByPinType_Params
	{
	public:
		EMapPinType                                                InPinType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4PM3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget_PinIconBtn.MapWidget_PinIconBtn_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_158_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMapWidget_PinIconBtn_C_BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_158_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_PinIconBtn.MapWidget_PinIconBtn_C.ExecuteUbergraph_MapWidget_PinIconBtn
	 */
	struct UMapWidget_PinIconBtn_C_ExecuteUbergraph_MapWidget_PinIconBtn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_PinIconBtn.MapWidget_PinIconBtn_C.OnPressed__DelegateSignature
	 */
	struct UMapWidget_PinIconBtn_C_OnPressed__DelegateSignature_Params
	{
	public:
		class UMapWidget_PinIconBtn_C*                             InPressedIcon;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
