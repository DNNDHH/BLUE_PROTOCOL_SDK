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
	 * Function CommonInfoIcon.CommonInfoIcon_C.CreateToolTipWidgetifNeeded
	 */
	struct UCommonInfoIcon_C_CreateToolTipWidgetifNeeded_Params
	{
	public:
		class UWBP_CommonToolTipDetail_Fixed_C*                    OutTooltip;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonInfoIcon.CommonInfoIcon_C.Get_InfoIcon_ToolTipWidget_1
	 */
	struct UCommonInfoIcon_C_Get_InfoIcon_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonInfoIcon.CommonInfoIcon_C.Set Info Stack Imagine
	 */
	struct UCommonInfoIcon_C_SetInfoStackImagine_Params
	{
	public:
		class FString                                              InInfoName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InInfoType;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InInfoDesc;                                              // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InInfoType2;                                             // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InInfoDesc2;                                             // 0x0040(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FOwnItemInfo                                        Info;                                                    // 0x0050(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       StackBEffectiveDisplay;                                  // 0x01A0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AF09[0x7];                                   // 0x01A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonInfoIcon.CommonInfoIcon_C.SetInfoNameAndDesc
	 */
	struct UCommonInfoIcon_C_SetInfoNameAndDesc_Params
	{
	public:
		class FString                                              InInfoName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InInfoDesc;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonInfoIcon.CommonInfoIcon_C.SetInfoNameAndType
	 */
	struct UCommonInfoIcon_C_SetInfoNameAndType_Params
	{
	public:
		class FString                                              InInfoName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InInfoType;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonInfoIcon.CommonInfoIcon_C.SetInfo
	 */
	struct UCommonInfoIcon_C_SetInfo_Params
	{
	public:
		class FString                                              InInfoName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InInfoType;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InInfoDesc;                                              // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
