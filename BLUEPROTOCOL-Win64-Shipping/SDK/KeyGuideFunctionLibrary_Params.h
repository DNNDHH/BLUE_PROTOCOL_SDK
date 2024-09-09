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
	 * Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad2_MakeChangeLockText
	 */
	struct UKeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeChangeLockText_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UObject*                                             __WorldContext;                                          // 0x01D0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                ReturnValue;                                             // 0x01D8(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_GetVerticalChildWidget
	 */
	struct UKeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UWidget*>                                     Out;                                                     // 0x0010(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_GetPareItems
	 */
	struct UKeyGuideFunctionLibrary_C_KeyGuide_GetPareItems_Params
	{
	public:
		TArray<class UWidget*>                                     InAllChildren;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class USBRuntimeTextBlock*>                         outActionTextArray;                                      // 0x0018(0x0010)  (Parm, OutParm, ContainsInstancedReference)
		TArray<ESBKeyConfigAction>                                 outActionConfigArray;                                    // 0x0028(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.Key Guide Mouse 2 Make Oriento Camera Text
	 */
	struct UKeyGuideFunctionLibrary_C_KeyGuideMouse2MakeOrientoCameraText_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UTextBlock*                                          InTextObject;                                            // 0x01D0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x01D8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Mouse2_MakeMovesText
	 */
	struct UKeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UTextBlock*                                          TextObject;                                              // 0x01D0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x01D8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Mouse2_GetKeytoTextString
	 */
	struct UKeyGuideFunctionLibrary_C_KeyGuide_Mouse2_GetKeytoTextString_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBKeyConfigAction                                         KeyConfigAction;                                         // 0x01D0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OSFS[0x7];                                   // 0x01D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x01D8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              ReturnValue;                                             // 0x01E0(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Mouse2_KeyConfigActiontoKey
	 */
	struct UKeyGuideFunctionLibrary_C_KeyGuide_Mouse2_KeyConfigActiontoKey_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBKeyConfigAction                                         KeyConfigAction;                                         // 0x01D0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OD4F[0x7];                                   // 0x01D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x01D8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FKey                                                Key;                                                     // 0x01E0(0x0018)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_MakePare
	 */
	struct UKeyGuideFunctionLibrary_C_KeyGuide_MakePare_Params
	{
	public:
		TArray<class USBRuntimeTextBlock*>                         InKey;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		TArray<ESBKeyConfigAction>                                 InValue;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UObject*                                             __WorldContext;                                          // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction>       ReturnValue;                                             // 0x0028(0x0050)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Mouse2_MakeMessage
	 */
	struct UKeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage_Params
	{
	public:
		TArray<class USBRuntimeTextBlock*>                         InKey;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction>       TargetMap;                                               // 0x0010(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0060(0x01D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UTextBlock*                                          InSheethTextObject;                                      // 0x0230(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0238(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad_MakeString
	 */
	struct UKeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBKeyConfigAction                                         KeyConfigAction;                                         // 0x01D0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsDash;                                                  // 0x01D1(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsDodge;                                                 // 0x01D2(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4Y1M[0x5];                                   // 0x01D3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x01D8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              ReturnValue;                                             // 0x01E0(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad_MakeJumpAttackText
	 */
	struct UKeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeJumpAttackText_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UObject*                                             __WorldContext;                                          // 0x01D0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              ReturnValue;                                             // 0x01D8(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad_MakeDodgeAttackText
	 */
	struct UKeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeDodgeAttackText_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UObject*                                             __WorldContext;                                          // 0x01D0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              ReturnValue;                                             // 0x01D8(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad2_MakeString
	 */
	struct UKeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBKeyConfigAction                                         KeyConfigAction;                                         // 0x01D0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BPIH[0x7];                                   // 0x01D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x01D8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                ReturnValue1;                                            // 0x01E0(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad2_KeyConfigActiontoKey
	 */
	struct UKeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_KeyConfigActiontoKey_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBKeyConfigAction                                         KeyConfigAction;                                         // 0x01D0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6H43[0x7];                                   // 0x01D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x01D8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FKey                                                Key;                                                     // 0x01E0(0x0018)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad2_MakeMovesText
	 */
	struct UKeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeMovesText_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UObject*                                             __WorldContext;                                          // 0x01D0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                ReturnValue;                                             // 0x01D8(0x0018)  (Parm, OutParm, ReturnParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
