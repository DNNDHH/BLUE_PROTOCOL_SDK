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
	 * Function TextWindowDemo.TextWindowDemo_C.SetDisp
	 */
	struct UTextWindowDemo_C_SetDisp_Params
	{
	public:
		bool                                                       IsDisp;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TextWindowDemo.TextWindowDemo_C.IsShow
	 */
	struct UTextWindowDemo_C_IsShow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TextWindowDemo.TextWindowDemo_C.Construct
	 */
	struct UTextWindowDemo_C_Construct_Params
	{	};

	/**
	 * Function TextWindowDemo.TextWindowDemo_C.Show
	 */
	struct UTextWindowDemo_C_Show_Params
	{	};

	/**
	 * Function TextWindowDemo.TextWindowDemo_C.Hide
	 */
	struct UTextWindowDemo_C_Hide_Params
	{	};

	/**
	 * Function TextWindowDemo.TextWindowDemo_C.SetText
	 */
	struct UTextWindowDemo_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TextWindowDemo.TextWindowDemo_C.SetSpeaker
	 */
	struct UTextWindowDemo_C_SetSpeaker_Params
	{
	public:
		class FName                                                InProfileId;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TextWindowDemo.TextWindowDemo_C.SetNextMarkVisibility
	 */
	struct UTextWindowDemo_C_SetNextMarkVisibility_Params
	{
	public:
		bool                                                       bInVisibility;                                           // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TextWindowDemo.TextWindowDemo_C.ExecuteUbergraph_TextWindowDemo
	 */
	struct UTextWindowDemo_C_ExecuteUbergraph_TextWindowDemo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GZEU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
