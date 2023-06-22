//
// Copyright (C) 2015 crosire & kagikn & contributors
// License: https://github.com/scripthookvdotnet/scripthookvdotnet#license
//

using System;

namespace GTA
{
	[Flags]
	public enum SetPlayerControlFlags
	{
		None = 0,
		/// <summary>
		/// Sets or removes the additional flag that determines whether this was called by an ambient script.
		/// </summary>
		/// <remarks>
		/// You will need to set this flag to make the <see cref="Player"/> have control when you switch the controls back on
		/// if you specifed this flag when you disabled the controls.
		/// </remarks>
		AmbientScript = 2,
		/// <summary>
		/// Clears the current tasks, such as a task for entering a vehicle (<c>CTaskEnterVehicle</c>).
		/// </summary>
		/// <remarks>
		/// Only works when you disable the controls.
		/// </remarks>
		ClearTasks = 4,
		/// <summary>
		/// Removes fires in the vicinity of the <see cref="Player"/>.
		/// </summary>
		/// <remarks>
		/// Only works when you disable the controls.
		/// </remarks>
		RemoveFires = 8,
		/// <summary>
		/// Removes explosions in the vicinity of the <see cref="Player"/>.
		/// </summary>
		/// <remarks>
		/// Only works when you disable the controls.
		/// </remarks>
		RemoveExplosions = 16,
		/// <summary>
		/// Removes all projectiles.
		/// </summary>
		/// <remarks>
		/// Only works when you disable the controls.
		/// </remarks>
		RemoveProjectiles = 32,
		/// <summary>
		/// Re-enables the player's controls if they die whilst not under control.
		/// </summary>
		/// <remarks>
		/// Only works when you disable the controls.
		/// </remarks>
		ReenableControlOnDeath = 128,
		/// <summary>
		/// Leaves the camera control on when disabling player control by not setting the flag for disabling the camera control
		/// (off by default if removing player control, turned back on when resuming control).
		/// </summary>
		/// <remarks>
		/// Only works when you disable the controls.
		/// </remarks>
		LeaveCameraControlOn = 256,
		/// <summary>
		/// Allow the player to be damaged even if their control is turned off. 
		/// </summary>
		/// <remarks>
		/// Only works when you disable the controls.
		/// </remarks>
		AllowPlayerDamage = 512,
		/// <summary>
		/// Tells nearby <see cref="Vehicle"/>s to stop moving or get out of the way
		/// </summary>
		/// <remarks>
		/// Only works when you disable the controls.
		/// </remarks>
		DontStopOtherCarsAroundPlayer = 1024,
		/// <summary>
		/// Prevent <see cref="Ped"/>s from backing off when player controls are disabled
		/// </summary>
		/// <remarks>
		/// Only works when you disable the controls.
		/// </remarks>
		PreventEverybodyBackOff = 2048,
		/// <summary>
		/// Allows the game controller (gamepad) to rumble.
		/// </summary>
		/// <remarks>
		/// Only works when you disable the controls.
		/// </remarks>
		AllowPadRumble = 4096,
	}
}
