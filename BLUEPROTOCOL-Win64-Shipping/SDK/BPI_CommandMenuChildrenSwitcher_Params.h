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
	 * Function BPI_CommandMenuChildrenSwitcher.BPI_CommandMenuChildrenSwitcher_C.SwitchSelect
	 */
	struct UBPI_CommandMenuChildrenSwitcher_C_SwitchSelect_Params
	{
	public:
		class FString                                              OpenBookMarkType;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                ParamName;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_CommandMenuChildrenSwitcher.BPI_CommandMenuChildrenSwitcher_C.TermRequesTiming
	 */
	struct UBPI_CommandMenuChildrenSwitcher_C_TermRequesTiming_Params
	{	};

	/**
	 * Function BPI_CommandMenuChildrenSwitcher.BPI_CommandMenuChildrenSwitcher_C.SwitchOut
	 */
	struct UBPI_CommandMenuChildrenSwitcher_C_SwitchOut_Params
	{	};

	/**
	 * Function BPI_CommandMenuChildrenSwitcher.BPI_CommandMenuChildrenSwitcher_C.SwitchIn
	 */
	struct UBPI_CommandMenuChildrenSwitcher_C_SwitchIn_Params
	{
	public:
		class FString                                              OpenBookMarkType;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                ParamName;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
