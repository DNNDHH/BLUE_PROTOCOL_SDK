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
	 * Function DedicatedClassHUD.DedicatedClassHUD_C.UnregistClassHud
	 */
	struct UDedicatedClassHUD_C_UnregistClassHud_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DedicatedClassHUD.DedicatedClassHUD_C.LoadSavePosition
	 */
	struct UDedicatedClassHUD_C_LoadSavePosition_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function DedicatedClassHUD.DedicatedClassHUD_C.RegistWidget
	 */
	struct UDedicatedClassHUD_C_RegistWidget_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Name;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function DedicatedClassHUD.DedicatedClassHUD_C.Construct
	 */
	struct UDedicatedClassHUD_C_Construct_Params
	{	};

	/**
	 * Function DedicatedClassHUD.DedicatedClassHUD_C.RegistClassHud
	 */
	struct UDedicatedClassHUD_C_RegistClassHud_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Name;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function DedicatedClassHUD.DedicatedClassHUD_C.OnUpdateHudLayout
	 */
	struct UDedicatedClassHUD_C_OnUpdateHudLayout_Params
	{	};

	/**
	 * Function DedicatedClassHUD.DedicatedClassHUD_C.ExecuteUbergraph_DedicatedClassHUD
	 */
	struct UDedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FM59[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
