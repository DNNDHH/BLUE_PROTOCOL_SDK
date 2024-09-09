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
	 * Function TokenCategoryList.TokenCategoryList_C.SetList
	 */
	struct UTokenCategoryList_C_SetList_Params
	{	};

	/**
	 * Function TokenCategoryList.TokenCategoryList_C.OnButtonClick
	 */
	struct UTokenCategoryList_C_OnButtonClick_Params
	{
	public:
		int32_t                                                    listIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TokenCategoryList.TokenCategoryList_C.SeInputActive
	 */
	struct UTokenCategoryList_C_SeInputActive_Params
	{
	public:
		bool                                                       InputActive;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TokenCategoryList.TokenCategoryList_C.ExecuteUbergraph_TokenCategoryList
	 */
	struct UTokenCategoryList_C_ExecuteUbergraph_TokenCategoryList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TokenCategoryList.TokenCategoryList_C.OnClick__DelegateSignature
	 */
	struct UTokenCategoryList_C_OnClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
