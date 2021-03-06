/**
 * Copyright (c) 2000-2013 Liferay, Inc. All rights reserved.
 *
 * This library is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation; either version 2.1 of the License, or (at your option)
 * any later version.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
 * details.
 */

package com.liferay.mobile.android.v62.backgroundtask;

import com.liferay.mobile.android.service.BaseService;
import com.liferay.mobile.android.service.Session;

import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/**
 * @author Bruno Farache
 */
public class BackgroundTaskService extends BaseService {
	public BackgroundTaskService(Session session) {
		super(session);
	}

	public String getBackgroundTaskStatusJson(long backgroundTaskId)
		throws Exception {
		JSONObject _command = new JSONObject();

		try {
			JSONObject _params = new JSONObject();

			_params.put("backgroundTaskId", backgroundTaskId);

			_command.put("/backgroundtask/get-background-task-status-json",
				_params);
		}
		catch (JSONException _je) {
			throw new Exception(_je);
		}

		return (String)session.invoke(_command);
	}
}