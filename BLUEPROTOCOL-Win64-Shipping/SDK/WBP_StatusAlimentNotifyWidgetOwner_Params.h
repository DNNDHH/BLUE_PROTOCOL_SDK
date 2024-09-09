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
	 * Function WBP_StatusAlimentNotifyWidgetOwner.WBP_StatusAlimentNotifyWidgetOwner_C.AddProcessing
	 */
	struct UWBP_StatusAlimentNotifyWidgetOwner_C_AddProcessing_Params
	{
	public:
		struct FSBStatusAilmentIconConfig                          InStatusAilmentIconType;                                 // 0x0000(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		unsigned char                                              UnknownData_OECT[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              InOwnerActor;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StatusAlimentNotifyWidgetOwner.WBP_StatusAlimentNotifyWidgetOwner_C.SetSystemVisibility
	 */
	struct UWBP_StatusAlimentNotifyWidgetOwner_C_SetSystemVisibility_Params
	{
	public:
		bool                                                       bVisibility;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StatusAlimentNotifyWidgetOwner.WBP_StatusAlimentNotifyWidgetOwner_C.Construct
	 */
	struct UWBP_StatusAlimentNotifyWidgetOwner_C_Construct_Params
	{	};

	/**
	 * Function WBP_StatusAlimentNotifyWidgetOwner.WBP_StatusAlimentNotifyWidgetOwner_C.OnUIVisibleSettingChange
	 */
	struct UWBP_StatusAlimentNotifyWidgetOwner_C_OnUIVisibleSettingChange_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StatusAlimentNotifyWidgetOwner.WBP_StatusAlimentNotifyWidgetOwner_C.Destruct
	 */
	struct UWBP_StatusAlimentNotifyWidgetOwner_C_Destruct_Params
	{	};

	/**
	 * Function WBP_StatusAlimentNotifyWidgetOwner.WBP_StatusAlimentNotifyWidgetOwner_C.ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner
	 */
	struct UWBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JSS4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
