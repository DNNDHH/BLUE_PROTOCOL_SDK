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
	 * Function UIBlocker.UIBlocker_C.Construct
	 */
	struct UUIBlocker_C_Construct_Params
	{	};

	/**
	 * Function UIBlocker.UIBlocker_C.BP_SetVisibility
	 */
	struct UUIBlocker_C_BP_SetVisibility_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UIBlocker.UIBlocker_C.Destruct
	 */
	struct UUIBlocker_C_Destruct_Params
	{	};

	/**
	 * Function UIBlocker.UIBlocker_C.SetBlockInputInBlocker
	 */
	struct UUIBlocker_C_SetBlockInputInBlocker_Params
	{	};

	/**
	 * Function UIBlocker.UIBlocker_C.ChangeUiBlockerType
	 */
	struct UUIBlocker_C_ChangeUiBlockerType_Params
	{
	public:
		ESBUIBlockerType                                           UIBlockerType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UIBlocker.UIBlocker_C.UpdateBlockInputByVisibility
	 */
	struct UUIBlocker_C_UpdateBlockInputByVisibility_Params
	{
	public:
		ESlateVisibility                                           IsVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UIBlocker.UIBlocker_C.ExecuteUbergraph_UIBlocker
	 */
	struct UUIBlocker_C_ExecuteUbergraph_UIBlocker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
