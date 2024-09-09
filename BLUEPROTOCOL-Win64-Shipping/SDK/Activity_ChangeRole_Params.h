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
	 * Function Activity_ChangeRole.Activity_ChangeRole_C.Construct
	 */
	struct UActivity_ChangeRole_C_Construct_Params
	{	};

	/**
	 * Function Activity_ChangeRole.Activity_ChangeRole_C.SetActivity_Internal
	 */
	struct UActivity_ChangeRole_C_SetActivity_Internal_Params
	{
	public:
		struct FGuildActivity                                      Other;                                                   // 0x0000(0x00E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Activity_ChangeRole.Activity_ChangeRole_C.カスタムイベント_1
	 */
	struct UActivity_ChangeRole_C__1_Params
	{
	public:
		TArray<class FString>                                      Keys;                                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class FString>                                      Values;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Activity_ChangeRole.Activity_ChangeRole_C.ExecuteUbergraph_Activity_ChangeRole
	 */
	struct UActivity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R7J7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
