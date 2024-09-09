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
	 * Function ImagineCraftResult.ImagineCraftResult_C.SetText
	 */
	struct UImagineCraftResult_C_SetText_Params
	{	};

	/**
	 * Function ImagineCraftResult.ImagineCraftResult_C.Set Storageno
	 */
	struct UImagineCraftResult_C_SetStorageno_Params
	{
	public:
		int32_t                                                    StorageNo;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineCraftResult.ImagineCraftResult_C.SetUID
	 */
	struct UImagineCraftResult_C_SetUID_Params
	{
	public:
		class FString                                              UniqueId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineCraftResult.ImagineCraftResult_C.Close
	 */
	struct UImagineCraftResult_C_Close_Params
	{	};

	/**
	 * Function ImagineCraftResult.ImagineCraftResult_C.CloseDialog
	 */
	struct UImagineCraftResult_C_CloseDialog_Params
	{	};

	/**
	 * Function ImagineCraftResult.ImagineCraftResult_C.OnCloseDialog
	 */
	struct UImagineCraftResult_C_OnCloseDialog_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineCraftResult.ImagineCraftResult_C.Show
	 */
	struct UImagineCraftResult_C_Show_Params
	{	};

	/**
	 * Function ImagineCraftResult.ImagineCraftResult_C.ExecuteUbergraph_ImagineCraftResult
	 */
	struct UImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_833M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ImagineCraftResult.ImagineCraftResult_C.OnClosed__DelegateSignature
	 */
	struct UImagineCraftResult_C_OnClosed__DelegateSignature_Params
	{
	public:
		bool                                                       isCloseAll;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
