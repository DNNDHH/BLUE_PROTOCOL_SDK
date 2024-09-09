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
	 * Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.GetIconID
	 */
	struct UFang_expedition_MapIcon_C_GetIconID_Params
	{
	public:
		int32_t                                                    OutParam;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.ClearNewMark
	 */
	struct UFang_expedition_MapIcon_C_ClearNewMark_Params
	{
	public:
		class FString                                              InParam;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.CheckNewMark
	 */
	struct UFang_expedition_MapIcon_C_CheckNewMark_Params
	{
	public:
		TArray<class FString>                                      InAreaList;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       OutParam;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.SetIconStatus
	 */
	struct UFang_expedition_MapIcon_C_SetIconStatus_Params
	{
	public:
		ESBFang_expeditionStatus                                   Status;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Multi;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Time;                                                    // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       New;                                                     // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.SetIconData
	 */
	struct UFang_expedition_MapIcon_C_SetIconData_Params
	{
	public:
		struct FSBFang_expeditionIconData                          IconData;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.SetData
	 */
	struct UFang_expedition_MapIcon_C_SetData_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    IconType;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       NewIcon;                                                 // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TimeIcon;                                                // 0x0015(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.BndEvt__Fang_expedition_MapIcon_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UFang_expedition_MapIcon_C_BndEvt__Fang_expedition_MapIcon_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.ExecuteUbergraph_Fang_expedition_MapIcon
	 */
	struct UFang_expedition_MapIcon_C_ExecuteUbergraph_Fang_expedition_MapIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.OnMultiIconSelect__DelegateSignature
	 */
	struct UFang_expedition_MapIcon_C_OnMultiIconSelect__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.OnIconSelect__DelegateSignature
	 */
	struct UFang_expedition_MapIcon_C_OnIconSelect__DelegateSignature_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
