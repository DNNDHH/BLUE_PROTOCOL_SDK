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
	 * Function TokenList.TokenList_C.SetExpiredTokenListFunc
	 */
	struct UTokenList_C_SetExpiredTokenListFunc_Params
	{
	public:
		struct FSBExpiredTokenStates                               SBExpiredTokenStates;                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TokenList.TokenList_C.SetTokenListFunc
	 */
	struct UTokenList_C_SetTokenListFunc_Params
	{
	public:
		struct FSBTokenStates                                      TokenStates;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TokenList.TokenList_C.Construct
	 */
	struct UTokenList_C_Construct_Params
	{	};

	/**
	 * Function TokenList.TokenList_C.OnGetMyCharacterInfoDelegate_イベント_1
	 */
	struct UTokenList_C_OnGetMyCharacterInfoDelegate__1_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TokenList.TokenList_C.Destruct
	 */
	struct UTokenList_C_Destruct_Params
	{	};

	/**
	 * Function TokenList.TokenList_C.SetMoneyList
	 */
	struct UTokenList_C_SetMoneyList_Params
	{	};

	/**
	 * Function TokenList.TokenList_C.GetCryptocurerncy
	 */
	struct UTokenList_C_GetCryptocurerncy_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MPBW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBCryptoCurrency                                   Cryptocurrency;                                          // 0x0008(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function TokenList.TokenList_C.GetStateList
	 */
	struct UTokenList_C_GetStateList_Params
	{
	public:
		struct FSBTokenStates                                      States;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TokenList.TokenList_C.OnGetExpiredList
	 */
	struct UTokenList_C_OnGetExpiredList_Params
	{
	public:
		struct FSBExpiredTokenStates                               States;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TokenList.TokenList_C.SetTokenList
	 */
	struct UTokenList_C_SetTokenList_Params
	{
	public:
		int32_t                                                    Category;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TokenList.TokenList_C.SetExpiredTokenList
	 */
	struct UTokenList_C_SetExpiredTokenList_Params
	{	};

	/**
	 * Function TokenList.TokenList_C.ExecuteUbergraph_TokenList
	 */
	struct UTokenList_C_ExecuteUbergraph_TokenList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TokenList.TokenList_C.OnMoneyListEnd__DelegateSignature
	 */
	struct UTokenList_C_OnMoneyListEnd__DelegateSignature_Params
	{	};

	/**
	 * Function TokenList.TokenList_C.OnGetTokenListBlankText__DelegateSignature
	 */
	struct UTokenList_C_OnGetTokenListBlankText__DelegateSignature_Params
	{	};

	/**
	 * Function TokenList.TokenList_C.OnGetExpiredBlankText__DelegateSignature
	 */
	struct UTokenList_C_OnGetExpiredBlankText__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
