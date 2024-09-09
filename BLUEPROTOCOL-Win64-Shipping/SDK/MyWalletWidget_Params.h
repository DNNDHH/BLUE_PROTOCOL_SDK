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
	 * Function MyWalletWidget.MyWalletWidget_C.SetBG
	 */
	struct UMyWalletWidget_C_SetBG_Params
	{	};

	/**
	 * Function MyWalletWidget.MyWalletWidget_C.GetCount
	 */
	struct UMyWalletWidget_C_GetCount_Params
	{
	public:
		int32_t                                                    ShowCount;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyWalletWidget.MyWalletWidget_C.IsShow
	 */
	struct UMyWalletWidget_C_IsShow_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C1WP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyWalletWidget.MyWalletWidget_C.Hide
	 */
	struct UMyWalletWidget_C_Hide_Params
	{	};

	/**
	 * Function MyWalletWidget.MyWalletWidget_C.Show
	 */
	struct UMyWalletWidget_C_Show_Params
	{	};

	/**
	 * Function MyWalletWidget.MyWalletWidget_C.SetActive
	 */
	struct UMyWalletWidget_C_SetActive_Params
	{
	public:
		ECurrencyType                                              InCurrencyType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInActive;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HPDI[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyWalletWidget.MyWalletWidget_C.PreConstruct_Internal
	 */
	struct UMyWalletWidget_C_PreConstruct_Internal_Params
	{
	public:
		TArray<class UCurrencyWidget_C*>                           Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function MyWalletWidget.MyWalletWidget_C.PreConstruct
	 */
	struct UMyWalletWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyWalletWidget.MyWalletWidget_C.Construct
	 */
	struct UMyWalletWidget_C_Construct_Params
	{	};

	/**
	 * Function MyWalletWidget.MyWalletWidget_C.ExecuteUbergraph_MyWalletWidget
	 */
	struct UMyWalletWidget_C_ExecuteUbergraph_MyWalletWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NZDF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
