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
	 * Function VOptionSubButtonList.VOptionSubButtonList_C.PreConstruct
	 */
	struct UVOptionSubButtonList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VOptionSubButtonList.VOptionSubButtonList_C.ClearChilds
	 */
	struct UVOptionSubButtonList_C_ClearChilds_Params
	{	};

	/**
	 * Function VOptionSubButtonList.VOptionSubButtonList_C.GenerateChildren
	 */
	struct UVOptionSubButtonList_C_GenerateChildren_Params
	{	};

	/**
	 * Function VOptionSubButtonList.VOptionSubButtonList_C.OnClicledChildButton
	 */
	struct UVOptionSubButtonList_C_OnClicledChildButton_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function VOptionSubButtonList.VOptionSubButtonList_C.ChangeFocusButton
	 */
	struct UVOptionSubButtonList_C_ChangeFocusButton_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function VOptionSubButtonList.VOptionSubButtonList_C.ExecuteUbergraph_VOptionSubButtonList
	 */
	struct UVOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function VOptionSubButtonList.VOptionSubButtonList_C.OnClicked__DelegateSignature
	 */
	struct UVOptionSubButtonList_C_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
