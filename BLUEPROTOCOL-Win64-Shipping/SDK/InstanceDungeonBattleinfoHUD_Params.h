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
	 * Function InstanceDungeonBattleinfoHUD.InstanceDungeonBattleinfoHUD_C.SetRootVisibility
	 */
	struct UInstanceDungeonBattleinfoHUD_C_SetRootVisibility_Params
	{
	public:
		bool                                                       InVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InstanceDungeonBattleinfoHUD.InstanceDungeonBattleinfoHUD_C.UpdateDemoHUD
	 */
	struct UInstanceDungeonBattleinfoHUD_C_UpdateDemoHUD_Params
	{
	public:
		TArray<bool>                                               InDemoPlay;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class UDemoHUD_C*>                                  InHUD;                                                   // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function InstanceDungeonBattleinfoHUD.InstanceDungeonBattleinfoHUD_C.SetPlayerReadyVisibility
	 */
	struct UInstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility_Params
	{
	public:
		class UHorizontalBox*                                      InHorizonalBox;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InMax;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InReadyNum;                                              // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InstanceDungeonBattleinfoHUD.InstanceDungeonBattleinfoHUD_C.Construct
	 */
	struct UInstanceDungeonBattleinfoHUD_C_Construct_Params
	{	};

	/**
	 * Function InstanceDungeonBattleinfoHUD.InstanceDungeonBattleinfoHUD_C.ExecuteUbergraph_InstanceDungeonBattleinfoHUD
	 */
	struct UInstanceDungeonBattleinfoHUD_C_ExecuteUbergraph_InstanceDungeonBattleinfoHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9YE0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
