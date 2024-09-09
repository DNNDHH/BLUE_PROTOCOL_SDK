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
	 * Function BP_OrnamentForCapture_Studio.BP_OrnamentForCapture_Studio_C.ResetOrnament
	 */
	struct ABP_OrnamentForCapture_Studio_C_ResetOrnament_Params
	{	};

	/**
	 * Function BP_OrnamentForCapture_Studio.BP_OrnamentForCapture_Studio_C.UserConstructionScript
	 */
	struct ABP_OrnamentForCapture_Studio_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_OrnamentForCapture_Studio.BP_OrnamentForCapture_Studio_C.ReceiveBeginPlay
	 */
	struct ABP_OrnamentForCapture_Studio_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_OrnamentForCapture_Studio.BP_OrnamentForCapture_Studio_C.OnOrnamentCreationCompleted
	 */
	struct ABP_OrnamentForCapture_Studio_C_OnOrnamentCreationCompleted_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OrnamentForCapture_Studio.BP_OrnamentForCapture_Studio_C.LoadOrnamentAsset
	 */
	struct ABP_OrnamentForCapture_Studio_C_LoadOrnamentAsset_Params
	{
	public:
		int32_t                                                    InOrnamentId;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_27KB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InUniqueId;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OrnamentForCapture_Studio.BP_OrnamentForCapture_Studio_C.ExecuteUbergraph_BP_OrnamentForCapture_Studio
	 */
	struct ABP_OrnamentForCapture_Studio_C_ExecuteUbergraph_BP_OrnamentForCapture_Studio_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OrnamentForCapture_Studio.BP_OrnamentForCapture_Studio_C.OnOrnamentLoadedDelegate__DelegateSignature
	 */
	struct ABP_OrnamentForCapture_Studio_C_OnOrnamentLoadedDelegate__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
