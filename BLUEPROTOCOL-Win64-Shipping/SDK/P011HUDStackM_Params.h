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
	 * Function P011HUDStackM.P011HUDStackM_C.On Set StackM Value
	 */
	struct UP011HUDStackM_C_OnSetStackMValue_Params
	{
	public:
		int32_t                                                    InStack;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InAccRate;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function P011HUDStackM.P011HUDStackM_C.PlayAnimReverseInOut
	 */
	struct UP011HUDStackM_C_PlayAnimReverseInOut_Params
	{	};

	/**
	 * Function P011HUDStackM.P011HUDStackM_C.PlayAnimForwardInOut
	 */
	struct UP011HUDStackM_C_PlayAnimForwardInOut_Params
	{	};

	/**
	 * Function P011HUDStackM.P011HUDStackM_C.OnSetEditMode
	 */
	struct UP011HUDStackM_C_OnSetEditMode_Params
	{
	public:
		bool                                                       InIsEdit;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function P011HUDStackM.P011HUDStackM_C.OnTerminate
	 */
	struct UP011HUDStackM_C_OnTerminate_Params
	{	};

	/**
	 * Function P011HUDStackM.P011HUDStackM_C.OnInitialize
	 */
	struct UP011HUDStackM_C_OnInitialize_Params
	{	};

	/**
	 * Function P011HUDStackM.P011HUDStackM_C.OnUnbind
	 */
	struct UP011HUDStackM_C_OnUnbind_Params
	{	};

	/**
	 * Function P011HUDStackM.P011HUDStackM_C.OnBind
	 */
	struct UP011HUDStackM_C_OnBind_Params
	{	};

	/**
	 * Function P011HUDStackM.P011HUDStackM_C.BindVisibleSetting
	 */
	struct UP011HUDStackM_C_BindVisibleSetting_Params
	{	};

	/**
	 * Function P011HUDStackM.P011HUDStackM_C.OnUIVisibleSettingChange
	 */
	struct UP011HUDStackM_C_OnUIVisibleSettingChange_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function P011HUDStackM.P011HUDStackM_C.UnbindVisibleSetting
	 */
	struct UP011HUDStackM_C_UnbindVisibleSetting_Params
	{	};

	/**
	 * Function P011HUDStackM.P011HUDStackM_C.ExecuteUbergraph_P011HUDStackM
	 */
	struct UP011HUDStackM_C_ExecuteUbergraph_P011HUDStackM_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
