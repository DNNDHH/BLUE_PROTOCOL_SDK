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
	 * Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.SetData
	 */
	struct UFang_expedition_PlayListWindow_C_SetData_Params
	{
	public:
		struct FSBFang_expeditionData                              ExpeditionData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.Construct
	 */
	struct UFang_expedition_PlayListWindow_C_Construct_Params
	{	};

	/**
	 * Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.CB_OnPressDetailButton
	 */
	struct UFang_expedition_PlayListWindow_C_CB_OnPressDetailButton_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.CB_OnPressFinishButton
	 */
	struct UFang_expedition_PlayListWindow_C_CB_OnPressFinishButton_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.Destruct
	 */
	struct UFang_expedition_PlayListWindow_C_Destruct_Params
	{	};

	/**
	 * Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.ExecuteUbergraph_Fang_expedition_PlayListWindow
	 */
	struct UFang_expedition_PlayListWindow_C_ExecuteUbergraph_Fang_expedition_PlayListWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.OnPressFinishButton__DelegateSignature
	 */
	struct UFang_expedition_PlayListWindow_C_OnPressFinishButton__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.OnPressDetailButton__DelegateSignature
	 */
	struct UFang_expedition_PlayListWindow_C_OnPressDetailButton__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.OnSelectPlayListSlot__DelegateSignature
	 */
	struct UFang_expedition_PlayListWindow_C_OnSelectPlayListSlot__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
