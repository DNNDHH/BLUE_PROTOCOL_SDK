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
	 * Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.GetSkillTypeId
	 */
	struct UTacticalSkillTypeRadioBtn_C_GetSkillTypeId_Params
	{
	public:
		int32_t                                                    OutSkillTypeId;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.SetRadioBtnVisibility
	 */
	struct UTacticalSkillTypeRadioBtn_C_SetRadioBtnVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.IsRedioBtnSelected
	 */
	struct UTacticalSkillTypeRadioBtn_C_IsRedioBtnSelected_Params
	{
	public:
		bool                                                       OutIsSelected;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.SetRadioBtnSelected
	 */
	struct UTacticalSkillTypeRadioBtn_C_SetRadioBtnSelected_Params
	{
	public:
		bool                                                       InIsSelected;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OHZ4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.SetEquipped
	 */
	struct UTacticalSkillTypeRadioBtn_C_SetEquipped_Params
	{
	public:
		bool                                                       InIsEquipped;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.SetSelectMode
	 */
	struct UTacticalSkillTypeRadioBtn_C_SetSelectMode_Params
	{
	public:
		bool                                                       InIsSelectMode;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.SetSkillType
	 */
	struct UTacticalSkillTypeRadioBtn_C_SetSkillType_Params
	{
	public:
		int32_t                                                    InSkillTypeId;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2LD7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.PreConstruct
	 */
	struct UTacticalSkillTypeRadioBtn_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.BndEvt__TacticalSkillTypeRadioButton_RadioBtn_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UTacticalSkillTypeRadioBtn_C_BndEvt__TacticalSkillTypeRadioButton_RadioBtn_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.ExecuteUbergraph_TacticalSkillTypeRadioBtn
	 */
	struct UTacticalSkillTypeRadioBtn_C_ExecuteUbergraph_TacticalSkillTypeRadioBtn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.OnRadioBtnSelected__DelegateSignature
	 */
	struct UTacticalSkillTypeRadioBtn_C_OnRadioBtnSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    InSkillTypeId;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
