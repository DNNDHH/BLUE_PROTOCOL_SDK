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
	 * Function EnemyNamePlate.EnemyNamePlate_C.SetCharacter_Internal
	 */
	struct UEnemyNamePlate_C_SetCharacter_Internal_Params
	{
	public:
		class ASBCharacter*                                        InCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EnemyNamePlate.EnemyNamePlate_C.IsShowBuddyIcon
	 */
	struct UEnemyNamePlate_C_IsShowBuddyIcon_Params
	{
	public:
		bool                                                       ShowBuddyIcon;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UI8E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function EnemyNamePlate.EnemyNamePlate_C.SetVisibleCanvas
	 */
	struct UEnemyNamePlate_C_SetVisibleCanvas_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EnemyNamePlate.EnemyNamePlate_C.ResetBuffIcon
	 */
	struct UEnemyNamePlate_C_ResetBuffIcon_Params
	{	};

	/**
	 * Function EnemyNamePlate.EnemyNamePlate_C.SetName
	 */
	struct UEnemyNamePlate_C_SetName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function EnemyNamePlate.EnemyNamePlate_C.SetLevel
	 */
	struct UEnemyNamePlate_C_SetLevel_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QL6Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function EnemyNamePlate.EnemyNamePlate_C.OnDisplayStart
	 */
	struct UEnemyNamePlate_C_OnDisplayStart_Params
	{	};

	/**
	 * Function EnemyNamePlate.EnemyNamePlate_C.SetColorName
	 */
	struct UEnemyNamePlate_C_SetColorName_Params
	{
	public:
		struct FSlateColor                                         InColorAndOpacity;                                       // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function EnemyNamePlate.EnemyNamePlate_C.SetColorLV
	 */
	struct UEnemyNamePlate_C_SetColorLV_Params
	{
	public:
		struct FSlateColor                                         InColorAndOpacity;                                       // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function EnemyNamePlate.EnemyNamePlate_C.SetColorText
	 */
	struct UEnemyNamePlate_C_SetColorText_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EnemyNamePlate.EnemyNamePlate_C.SetupBuffIcon
	 */
	struct UEnemyNamePlate_C_SetupBuffIcon_Params
	{	};

	/**
	 * Function EnemyNamePlate.EnemyNamePlate_C.Unbind
	 */
	struct UEnemyNamePlate_C_Unbind_Params
	{	};

	/**
	 * Function EnemyNamePlate.EnemyNamePlate_C.Bind
	 */
	struct UEnemyNamePlate_C_Bind_Params
	{	};

	/**
	 * Function EnemyNamePlate.EnemyNamePlate_C.BindUIVisibleSettingChange
	 */
	struct UEnemyNamePlate_C_BindUIVisibleSettingChange_Params
	{	};

	/**
	 * Function EnemyNamePlate.EnemyNamePlate_C.UnbindUIVisibleSettingChange
	 */
	struct UEnemyNamePlate_C_UnbindUIVisibleSettingChange_Params
	{	};

	/**
	 * Function EnemyNamePlate.EnemyNamePlate_C.UIVisibleSettingChangeDelegate_Event_1
	 */
	struct UEnemyNamePlate_C_UIVisibleSettingChangeDelegate_Event_1_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EnemyNamePlate.EnemyNamePlate_C.Construct
	 */
	struct UEnemyNamePlate_C_Construct_Params
	{	};

	/**
	 * Function EnemyNamePlate.EnemyNamePlate_C.CustomEvent_1
	 */
	struct UEnemyNamePlate_C_CustomEvent_1_Params
	{	};

	/**
	 * Function EnemyNamePlate.EnemyNamePlate_C.SetHpRate
	 */
	struct UEnemyNamePlate_C_SetHpRate_Params
	{
	public:
		float                                                      HPRate;                                                  // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EnemyNamePlate.EnemyNamePlate_C.SetDepth
	 */
	struct UEnemyNamePlate_C_SetDepth_Params
	{
	public:
		float                                                      InDepth;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EnemyNamePlate.EnemyNamePlate_C.Destruct
	 */
	struct UEnemyNamePlate_C_Destruct_Params
	{	};

	/**
	 * Function EnemyNamePlate.EnemyNamePlate_C.SetScreenPositionOffset
	 */
	struct UEnemyNamePlate_C_SetScreenPositionOffset_Params
	{
	public:
		struct FLinearColor                                        InScreenPositionOffset;                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EnemyNamePlate.EnemyNamePlate_C.ExecuteUbergraph_EnemyNamePlate
	 */
	struct UEnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
